import java.util.Scanner;
public class DiscountCalculator {
public static void main(String[] args) {
Scanner scan = new Scanner(System.in);
int iron = scan.nextInt();
int steel = scan.nextInt();
int tun = scan.nextInt();
int nic = scan.nextInt();
calculateDiscount(iron, steel, tun, nic);
}
static void calculateDiscount(int i, int s, int t, int n) {
    float d1 = 0, d2 = 0;
d1 = i * (7.0f / 100) + s * (3.0f / 100) + t * (2.0f / 100) + n * (1.0f / 100);
float total = i + s + t + n;
if (total >= 25001 && total <= 50000) {
d2 = total * (5.0f / 100);
} else if (total >= 50001 && total <= 100000) {
d2 = total * (7.0f / 100);
} else if (total > 100000) {
d2 = total * (10.0f / 100);
}
if (d1 > d2) {
System.out.println(d1);
} else {
System.out.println(d2);
}
}
}