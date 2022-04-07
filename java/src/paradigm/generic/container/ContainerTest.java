package paradigm.generic.container;

import org.junit.Test;

import java.util.Objects;

import static org.junit.Assert.assertEquals;

public class ContainerTest {
    @Test
    public void GenericContainer() {
        Object[] ary = new Object[5];

        ary[0] = 1;
        ary[1] = "hi";
        ary[2] = 3.14f;
        ary[3] = 3.14d;

        class Person {
            final String name;
            final int age;

            public Person(String name, int age) {
                this.name = name;
                this.age = age;
            }

            @Override
            public boolean equals(Object o) {
                if (this == o) return true;
                if (o == null || getClass() != o.getClass()) return false;
                Person person = (Person) o;
                return age == person.age && Objects.equals(name, person.name);
            }

            @Override
            public int hashCode() {
                return Objects.hash(name, age);
            }

            @Override
            public String toString() {
                return "Person{" +
                        "name='" + name + '\'' +
                        ", age=" + age +
                        '}';
            }
        }
        Person person = new Person("John", 34);
        ary[4] = person;

//        test int
        System.out.println(ary[0]);
        assertEquals(1, ary[0]);

//        test string
        System.out.println(ary[1]);
        assertEquals("hi", ary[1]);

//        test float
        System.out.println(ary[2]);
        assertEquals(3.14f, (float) ary[2], 0.01f);

//        test double
        System.out.println(ary[3]);
        assertEquals(3.14d, (double) ary[3], 0.01d);

//        test struct
        System.out.println(ary[4]);
        assertEquals(person, ary[4]);
    }

}
