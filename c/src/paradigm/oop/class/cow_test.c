#include <assert.h>
#include "cow.h"

int main() {
    cow_t *c = make_cow(100);

    c->speak();
    assert(c->getWeight(c) == 100);

    c->setWeight(c, 200);
    assert(c->getWeight(c) == 200);

    c->delete(c);

    return 0;
}
