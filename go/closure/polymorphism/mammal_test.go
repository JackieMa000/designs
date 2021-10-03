package polymorphism

import (
	"testing"
)

func TestCow(t *testing.T) {
	c := Cow()
	c.print()
	c.speak()

	if c.getWeight() != 100 {
		t.Errorf("Cow weight initialization is wrong.")
	}

	c.setWeight(200)
	if c.getWeight() != 200 {
		t.Errorf("Cow setWeight is wrong.")
	}
}

func TestSheep(t *testing.T) {
	s := Sheep()
	s.print()
	s.speak()

	if s.getWeight() != 50 {
		t.Errorf("Sheep weight initialization is wrong.")
	}

	s.setWeight(100)
	if s.getWeight() != 100 {
		t.Errorf("Sheep setWeight is wrong.")
	}
}
