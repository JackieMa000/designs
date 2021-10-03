// oop polymorphism simulation
#pragma once

#include <printf.h>
#include <stdlib.h>

#include "mammal.h"

struct Cow;
typedef struct Cow cow_t;
static mammal_t *make_cow(int weight);

static void _Sheep_speak() {
    printf("moo~~ moo~~");
}

mammal_t *make_cow(int weight) {
    mammal_t *m = make_mammal(weight);
    m->speak = _Sheep_speak;

    return m;
}
