// oop inheritance simulation
#pragma once

#include <stdlib.h>

struct Mammal;
typedef struct Mammal mammal_t;
mammal_t *make_mammal(int weight);

struct Mammal {
  void (*speak)();

  void (*delete)(mammal_t *);

  int _weight;
  int (*getWeight)(mammal_t *);
  void (*setWeight)(mammal_t *, int);
};

static void _Mammal_delete(mammal_t *m) {
    free(m);
}

static int _Mammal_getWeight(mammal_t *m) {
    return m->_weight;
}

static void _Mammal_setWeight(mammal_t *m, int w) {
    m->_weight = w;
}

mammal_t *make_mammal(int weight) {
    mammal_t *m = malloc(sizeof(mammal_t));
    m->delete = _Mammal_delete;

    m->_weight = weight;
    m->getWeight = _Mammal_getWeight;
    m->setWeight = _Mammal_setWeight;

    return m;
}

