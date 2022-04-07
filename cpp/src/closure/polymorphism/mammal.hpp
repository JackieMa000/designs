#pragma once

#include <iostream>
#include <functional>

struct Mammal {
  int *weight{};

  std::function<void()> speak;
  std::function<int()> getWeight;
  std::function<void(int)> setWeight;

  void print() const {
      std::cout << "Printing..." << '\n';
      std::cout << "\t";
      speak();
      std::cout << "\tWeight: " << getWeight() << '\n';
  }
};

Mammal *make_cow() {
    int *weight = new int(100);

    auto *m = new Mammal();
    m->weight = weight;
    m->speak = []() { puts("momo~~ momo~~"); };
    m->getWeight = [weight]() { return *weight; };;
    m->setWeight = [weight](int w) { *weight = w; };

    return m;
}

void delete_cow(Mammal *m) {
    delete m->weight;
    delete m;
};

Mammal *make_sheep() {
    int *weight = new int(50);

    auto *m = new Mammal();
    m->weight = weight;
    m->speak = []() { puts("mee~~ mee~~"); };
    m->getWeight = [weight]() { return *weight; };;
    m->setWeight = [weight](int w) { *weight = w; };

    return m;
}

void delete_sheep(Mammal *m) {
    delete m->weight;
    delete m;
};
