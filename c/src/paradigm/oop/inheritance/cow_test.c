#include <assert.h>
#include "cow.h"

cow_t *setUp();
void tearDown(cow_t *c);

void test_getWeight(cow_t *c);
void test_setWeight(cow_t *c);
void test_produceMilk(cow_t *c);

int main() {
    cow_t *c = setUp();

    c->m->speak();
    test_getWeight(c);
    test_setWeight(c);
    test_produceMilk(c);

    tearDown(c);

    return 0;
}

cow_t *setUp() {
    return make_cow(100);
}
void tearDown(cow_t *c) { c->delete(c); }

void test_getWeight(cow_t *c) {
    assert(c->m->getWeight(c->m) == 100);
}
void test_setWeight(cow_t *c) {
    c->m->setWeight(c->m, 200);
    assert(c->m->getWeight(c->m) == 200);
}
void test_produceMilk(cow_t *c) {
    c->produceMilk(c);
    assert(c->getMilk(c) == 10);
}
