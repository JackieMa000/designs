package container

import (
	"fmt"
	"testing"
)

func TestGenericContainer(t *testing.T) {
	var ary [5]interface{}

	ary[0] = 1
	ary[1] = "hi"
	ary[2] = float32(3.14)
	ary[3] = 3.14

	type Person struct {
		name string
		age  int
	}
	person := Person{"John", 34}
	ary[4] = person

	// test int
	fmt.Println(ary[0])
	if ary[0] != 1 {
		t.Error("test int failed.")
	}

	// test string
	fmt.Println(ary[1])
	if ary[1] != "hi" {
		t.Error("test string failed.")
	}

	// 	test float32
	fmt.Println(ary[2])
	if ary[2] != float32(3.14) {
		t.Error("test float32 failed")
	}

	// 	test float64
	fmt.Println(ary[3])
	if ary[3] != 3.14 {
		t.Error("test float64 failed")
	}

	// 	test struct
	fmt.Println(ary[4])
	if ary[4] != person {
		t.Error("test struct failed")
	}
}
