// oop polymorphism simulation
#pragma once

#include <printf.h>
#include <stdlib.h>

#include "mammal.h"

static mammal_t *make_sheep(int weight);

static void _Cow_speak() {
    printf("mee~~ mee~~");
}

mammal_t *make_sheep(int weight) {
    mammal_t *m = make_mammal(weight);
    m->speak = _Cow_speak;
    return m;
}
