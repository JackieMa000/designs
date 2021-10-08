package closure.polymorphism;

import org.junit.Test;

import static org.junit.Assert.assertEquals;

public class MammalTest {
    @Test
    public void Cow() {
        Mammal c = Main.Cow();
        c.print();
        c.speak();

        System.out.printf("Cow weight: %d\n", c.getWeight());
        assertEquals(100, c.getWeight());

        c.setWeight(200);
        System.out.printf("Cow new weight: %d\n", c.getWeight());
        assertEquals(200, c.getWeight());
    }

    @Test
    public void Sheep() {
        Mammal s = Main.Sheep();
        s.print();
        s.speak();

        System.out.printf("Cow weight: %d\n", s.getWeight());
        assertEquals(50, s.getWeight());

        s.setWeight(100);
        System.out.printf("Cow new weight: %d\n", s.getWeight());
        assertEquals(100, s.getWeight());
    }
}