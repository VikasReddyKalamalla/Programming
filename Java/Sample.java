
class car{
    String name;
    float cost;
    float mileage;
    void start(){}
    void accelerate(){}
    void stop(){}

}
public class Sample{
    public static void main(String[] args){

    

car c1 = new car();
c1.start();
c1.accelerate();
c1.stop();
c1.name = "BMW";
c1.cost = 125.76f;
c1.mileage = 15.5f;

System.out.println("Car name  : "+c1.name);
System.out.println("Car cost  : "+c1.cost);
System.out.println("Car mileage  : "+c1.mileage);


    }
}