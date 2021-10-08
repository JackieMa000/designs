package polymorphism

import (
	"fmt"
	"testing"
)

func TestCow(t *testing.T) {
	c := Cow()
	c.print()
	c.speak()

	fmt.Printf("Cow weight: %d\n", c.getWeight())
	if c.getWeight() != 100 {
		t.Errorf("Cow weight initialization is wrong.")
	}

	c.setWeight(200)
	fmt.Printf("Cow new weight: %d\n", c.getWeight())
	if c.getWeight() != 200 {
		t.Errorf("Cow setWeight is wrong.")
	}
}

func TestSheep(t *testing.T) {
	s := Sheep()
	s.print()
	s.speak()

	fmt.Printf("Sheep weight: %d\n", s.getWeight())
	if s.getWeight() != 50 {
		t.Errorf("Sheep weight initialization is wrong.")
	}

	s.setWeight(100)
	fmt.Printf("Sheep new weight: %d\n", s.getWeight())
	if s.getWeight() != 100 {
		t.Errorf("Sheep setWeight is wrong.")
	}
}
