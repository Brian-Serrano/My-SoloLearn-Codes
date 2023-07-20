import java.util.Scanner;

public class Kaleidoscopes
{
    public static void main(String[] args) {
        System.out.println(total(new Scanner(System.in).nextDouble()));
    }
    public static double total(double kaleidoscope){
        double price = kaleidoscope * 107 / 20;
        return kaleidoscope > 1 ? Math.round((price * 9 / 10) * 100.0) / 100.0 : Math.round(price * 100.0) / 100.0;
    }
}