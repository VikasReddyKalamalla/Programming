interface Animal {
    void makeSound();
}

abstract class Bird {
    void eat() {
        System.out.println("Bird is eating");
    }
}

class Dog implements Animal {
    @Override
    public void makeSound() {
        System.out.println("Dog Barks");
    }
}

class Sparrow extends Bird {
    void fly() {
        System.out.println("Sparrow is flying");
    }
}

public class InterfaceAbstractDem{
    public static void main(String[] args) {

        Animal d = new Dog();
        d.makeSound();

        Sparrow s = new Sparrow();
        s.eat();
        s.fly();
    }
}