// oop inheritance simulation
#pragma once

#include <printf.h>
#include <stdlib.h>

#include "mammal.h"

struct Cow;
typedef struct Cow cow_t;
cow_t *make_cow(int weight);

struct Cow {
  mammal_t *m;

  void (*delete)(cow_t *);

  int _milk;
  int (*getMilk)(cow_t *);
  void (*produceMilk)(cow_t *);
};

static void _Cow_delete(cow_t *c) {
    c->m->delete(c->m);
    free(c);
}

static void _Cow_speak() {
    printf("moo~~ moo~~");
}

static int _Cow_getMilk(cow_t *c) {
    return c->_milk;
}

static void _Cow_produceMilk(cow_t *c) {
    c->_milk = 10;
}

cow_t *make_cow(int weight) {
    mammal_t *m = make_mammal(weight);
    cow_t *c = malloc(sizeof(cow_t));
    c->m = m;

    c->delete = _Cow_delete;

    c->m->speak = _Cow_speak;
    c->getMilk = _Cow_getMilk;
    c->produceMilk = _Cow_produceMilk;

    return c;
}

