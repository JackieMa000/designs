#include "mammal.hpp"

void test_cow();
void test_sheep();

int main() {
    test_cow();
    test_sheep();

    return 0;
}

void test_cow() {
    Mammal *c = make_cow();
    std::cout << "Cow Weight: " << c->getWeight() << '\n';
    c->print();
    c->speak();

    std::cout << "Cow Weight: " << c->getWeight() << '\n';
    assert(c->getWeight() == 100);

    c->setWeight(200);
    std::cout << "Cow new weight: " << c->getWeight() << '\n';
    assert(c->getWeight() == 200);

    delete_cow(c);
}

void test_sheep() {
    Mammal *s = make_sheep();
    std::cout << "Sheep Weight: " << s->getWeight() << '\n';
    s->print();
    s->speak();

    std::cout << "Sheep Weight: " << s->getWeight() << '\n';
    assert(s->getWeight() == 50);

    s->setWeight(100);
    std::cout << "Sheep new weight: " << s->getWeight() << '\n';
    assert(s->getWeight() == 100);

    delete_sheep(s);
}
