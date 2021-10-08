package closure.polymorphism;

public interface Mammal {
    void speak();

    int getWeight();

    void setWeight(int w);

    default void print() {
        System.out.println("Printing...");
        System.out.print('\t');
        speak();
        System.out.printf("\tWeight: %d\n", getWeight());
    }
}

class Main {
    static Mammal Cow() {
        int cowWeight = 100;

        return new Mammal() {
            int weight = cowWeight;

            @Override
            public void speak() {
                System.out.println("momo~~ momo~~");
            }

            @Override
            public int getWeight() {
                return weight;
            }

            @Override
            public void setWeight(int w) {
                weight = w;
            }
        };
    }

    static Mammal Sheep() {
        int sheepWeight = 50;

        return new Mammal() {
            int weight = sheepWeight;

            @Override
            public void speak() {
                System.out.println("mee~~ mee~~");
            }

            @Override
            public int getWeight() {
                return weight;
            }

            @Override
            public void setWeight(int w) {
                weight = w;
            }
        };
    }
}
