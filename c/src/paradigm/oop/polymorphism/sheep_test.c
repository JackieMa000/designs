#include <assert.h>
#include "sheep.h"

int main() {
    mammal_t *s = make_sheep(50);
    s->speak();

    assert(s->getWeight(s) == 50);

    s->setWeight(s, 200);
    assert(s->getWeight(s) == 200);

    s->delete(s);

    return 0;
}
