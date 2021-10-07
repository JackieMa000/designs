from typing import Callable


class Mammal:
    def __init__(self, speak, getWeight: Callable[[], int], setWeight: Callable[[int], None]):
        self.speak = speak
        self.getWeight = getWeight
        self.setWeight = setWeight

    def print(self) -> None:
        print("Printing..")
        print("\t", end='')
        self.speak()
        print("\tWeight: {}".format(self.getWeight()))


class Cow:
    weight = 100

    @staticmethod
    def speak() -> None:
        print("momo~~ momo~~")

    @classmethod
    def getWeight(cls) -> int:
        return cls.weight

    @classmethod
    def setWeight(cls, w: int) -> None:
        cls.weight = w

    @classmethod
    def make(cls) -> Mammal:
        return Mammal(cls.speak, cls.getWeight, cls.setWeight)


class Sheep():
    weight = 50

    @staticmethod
    def speak() -> None:
        print("mee~~ mee~~")

    @classmethod
    def getWeight(cls) -> int:
        return cls.weight

    @classmethod
    def setWeight(cls, w: int) -> None:
        cls.weight = w

    @classmethod
    def make(cls) -> Mammal:
        return Mammal(cls.speak, cls.getWeight, cls.setWeight)
