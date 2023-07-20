import java.util.Scanner;

public class PaintCosts
{
    public static void main(String[] args) {
        System.out.println(getCost(new Scanner(System.in).nextInt()));
	}

    public static int getCost(int paint) {
        return (int) Math.round(((paint * 5) + 40) * 1.1);
    }
}