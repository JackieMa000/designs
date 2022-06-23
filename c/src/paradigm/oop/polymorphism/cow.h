// oop polymorphism simulation
#pragma once

#include <printf.h>
#include <stdlib.h>

#include "mammal.h"

static mammal_t *make_cow(int weight);

static void _Cow_speak() {
    printf("moo~~ moo~~");
}

mammal_t *make_cow(int weight) {
    mammal_t *m = make_mammal(weight);
    m->speak = _Cow_speak;
    return m;
}
