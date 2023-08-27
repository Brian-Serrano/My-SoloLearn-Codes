import java.util.Scanner;

public class Kaleidoscopes
{
    public static void main(String[] args) {
        double kaleidoscope = new Scanner(System.in).nextDouble();
        double price = kaleidoscope * 107 / 20;
        System.out.println(kaleidoscope > 1 ? Math.round((price * 9 / 10) * 100.0) / 100.0 : Math.round(price * 100.0) / 100.0);
    }
}