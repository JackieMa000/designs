package polymorphism

import "fmt"

type Mammal struct {
	speak     func()
	getWeight func() int
	setWeight func(int)
}

func Cow() Mammal {
	weight := 100

	speak := func() { fmt.Println("momo~~ momo~~") }
	getWeight := func() int { return weight }
	setWeight := func(w int) { weight = w }

	return Mammal{speak, getWeight, setWeight}
}

func Sheep() Mammal {
	weight := 50

	speak := func() { fmt.Println("mee~~ mee~~") }
	getWeight := func() int { return weight }
	setWeight := func(w int) { weight = w }

	return Mammal{speak, getWeight, setWeight}
}
