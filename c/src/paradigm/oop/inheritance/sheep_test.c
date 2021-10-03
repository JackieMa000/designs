#include <assert.h>
#include "sheep.h"

sheep_t *setUp();
void tearDown(sheep_t *s);

void test_getWeight(sheep_t *s);
void test_setWeight(sheep_t *s);
void test_produceWool(sheep_t *s);

int main() {
    sheep_t *s = setUp();

    s->m->speak();
    test_getWeight(s);
    test_setWeight(s);
    test_produceWool(s);

    tearDown(s);

    return 0;
}

sheep_t *setUp() {
    return make_sheep(50);
}
void tearDown(sheep_t *s) { s->delete(s); }

void test_getWeight(sheep_t *s) {
    assert(s->m->getWeight(s->m) == 50);
}
void test_setWeight(sheep_t *s) {
    s->m->setWeight(s->m, 200);
    assert(s->m->getWeight(s->m) == 200);
}
void test_produceWool(sheep_t *s) {
    s->produceWool(s);
    assert(s->getWool(s) == 10);
}
