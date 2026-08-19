// Parent class
class Animal {
    // Method to be overridden
    public void sound() {
        System.out.println("Animal makes a sound");
    }
}

// Child class
class Dog extends Animal {
    // Overriding the sound() method
    @Override
    public void sound() {
        System.out.println("Dog barks");
    }
}

// Another Child class
class Cat extends Animal {
    @Override
    public void sound() {
        System.out.println("Cat meows");
    }
}

// Main class
public class Lab2 {
    public static void main(String[] args) {
        
        // Parent reference, parent object
        Animal a1 = new Animal();
        a1.sound(); // Output: Animal makes a sound

        // Parent reference, child object (Dog)
        Animal a2 = new Dog();
        a2.sound(); // Output: Dog barks

        // Parent reference, child object (Cat)
        Animal a3 = new Cat();
        a3.sound(); // Output: Cat meows
    }
}
