from unittest import TestCase

from closure.polymorphism.mammal import Cow, Sheep


class MammalTestCase(TestCase):
    def test_cow(self):
        c = Cow.make()
        c.print()
        c.speak()

        self.assertEqual(100, c.getWeight())

        c.setWeight(200)
        self.assertEqual(200, c.getWeight())

    def test_sheep(self):
        c = Sheep.make()
        c.print()
        c.speak()

        self.assertEqual(50, c.getWeight())

        c.setWeight(100)
        self.assertEqual(100, c.getWeight())
