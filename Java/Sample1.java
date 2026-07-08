
class Dog{
    String name;
    float cost;
    void eat(){}
    void bark(){}

}
public class Sample1{
    public static void main(String[] args){

    

Dog d1 = new Dog();
d1.eat();
d1.bark();
d1.name = "Peko";
d1.cost = 12965.23f;


System.out.println("Dog name :   "+d1.name);
System.out.println("Dog Cost : "+d1.cost);




    }
}