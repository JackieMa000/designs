// oop polymorphism simulation
#pragma once

#include <printf.h>
#include <stdlib.h>

#include "mammal.h"

struct Sheep;
typedef struct Sheep sheep_t;
static mammal_t *make_sheep(int weight);

static void _Sheep_speak() {
    printf("mee~~ mee~~");
}

mammal_t *make_sheep(int weight) {
    mammal_t *m = make_mammal(weight);
    m->speak = _Sheep_speak;
    return m;
}
