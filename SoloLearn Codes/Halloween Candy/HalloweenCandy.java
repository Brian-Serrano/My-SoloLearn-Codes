import java.util.Scanner;

public class HalloweenCandy
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        double x = sc.nextDouble();
        System.out.println(percent(x));
	}
    public static int percent(double x){
        return (int) Math.ceil((2 / x) * 100);
    }
}