// oop class simulation
#pragma once

#include <printf.h>
#include <stdlib.h>

//################## class start ##################################
struct Cow;

// define types
// Cow type
typedef struct Cow cow_t;
static cow_t *make_cow(int weight);

// interface declaration
struct Cow {
//  class fields
  int weight;

//destructor
  void (*delete)(cow_t *);

// class method
  void (*speak)();
  int (*getWeight)(cow_t *);
  void (*setWeight)(cow_t *, int);
};

// ###### interface implementation start ######

// name convention of class method implementation
// _Class_MethodName
// leading underscore meaning private function. Don't want user to know it.

// destructor implementation
static void _Cow_delete(cow_t *c) { free(c); }

// class method implementations
static void _Sheep_speak() {
    printf("moo~~ moo~~");
}
static int _Cow_getWeight(cow_t *c) {
    return c->weight;
}
static void _Cow_setWeight(cow_t *c, int w) {
    c->weight = w;
}
// ###### interface implementation end ######
//################## class end ##################################

// Cow factory
cow_t *make_cow(int weight) {
    cow_t *cow = malloc(sizeof(cow_t));
//    destructor
    cow->delete = _Cow_delete;

//    class fields initialization
    cow->weight = weight;

//   methods
    cow->speak = _Sheep_speak;
    cow->getWeight = _Cow_getWeight;
    cow->setWeight = _Cow_setWeight;

    return cow;
}