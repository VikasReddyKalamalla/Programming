class MethodOverloading{
    // Method to add two integers
    public int add(int a, int b) {
        return a + b;
    }

    // Overloaded method to add three integers
    public int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded method to add two doubles
    public double add(double a, double b) {
        return a + b;
    }
}

public class MethodOveloading{
    public static void main(String[] args) {
        MethodOverloading mo = new MethodOverloading();
        System.out.println(mo.add(5, 10));         // Calls add(int, int)
        System.out.println(mo.add(5, 10, 15));     // Calls add(int, int, int)
        System.out.println(mo.add(5.5, 10.2));     // Calls add(double, double)
    }
}

