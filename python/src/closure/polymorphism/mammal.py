class Mammal:
    def __init__(self, speak, getWeight, setWeight):
        self.speak = speak
        self.getWeight = getWeight
        self.setWeight = setWeight

    def print(self) -> None:
        print("Printing..")
        print("\t", end='')
        self.speak()
        print("\tWeight: {}".format(self.getWeight()))


class Cow():
    def __init__(self):
        self.weight = 100

    def speak(self) -> None:
        print("momo~~ momo~~")

    def getWeight(self) -> int:
        return self.weight

    def setWeight(self, w: int) -> None:
        self.weight = w

    def __call__(self, *args, **kwargs):
        return Mammal(self.speak, self.getWeight, self.setWeight)


class Sheep():
    def __init__(self):
        self.weight = 50

    def speak(self) -> None:
        print("mee~~ mee~~")

    def getWeight(self) -> int:
        return self.weight

    def setWeight(self, w: int) -> None:
        self.weight = w

    def __call__(self, *args, **kwargs):
        return Mammal(self.speak, self.getWeight, self.setWeight)
