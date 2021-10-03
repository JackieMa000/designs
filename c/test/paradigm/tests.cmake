add_test(NAME OOP_ClassTest COMMAND oop_class_test)

add_test(NAME OOP_InheritanceTest.cow COMMAND oop_inheritance_test.cow)
add_test(NAME OOP_InheritanceTest.sheep COMMAND oop_inheritance_test.sheep)

add_test(NAME OOP_PolymorphismTest.cow COMMAND oop_pm_test.cow)
add_test(NAME OOP_PolymorphismTest.sheep COMMAND oop_pm_test.sheep)
