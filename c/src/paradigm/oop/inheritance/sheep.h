// oop inheritance simulation
#pragma once

#include <printf.h>
#include <stdlib.h>

#include "mammal.h"

struct Sheep;
typedef struct Sheep sheep_t;
sheep_t *make_sheep(int weight);

struct Sheep {
  mammal_t *m;

  void (*delete)(sheep_t *);

  int _wool;
  int (*getWool)(sheep_t *);
  void (*produceWool)(sheep_t *);
};

static void _Sheep_delete(sheep_t *s) {
    s->m->delete(s->m);
    free(s);
}

static void _Cow_speak() {
    printf("mee~~ mee~~");
}

static int _Sheep_getWool(sheep_t *s) {
    return s->_wool;
}

static void _Sheep_produceWool(sheep_t *s) {
    s->_wool = 10;
}

sheep_t *make_sheep(int weight) {
    mammal_t *m = make_mammal(weight);
    sheep_t *s = malloc(sizeof(sheep_t));
    s->m = m;

    s->delete = _Sheep_delete;

    s->m->speak = _Cow_speak;
    s->getWool = _Sheep_getWool;
    s->produceWool = _Sheep_produceWool;

    return s;
}
