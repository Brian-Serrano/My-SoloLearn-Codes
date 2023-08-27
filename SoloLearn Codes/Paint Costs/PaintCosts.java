import java.util.Scanner;

public class PaintCosts
{
    public static void main(String[] args) {
        System.out.println((int) Math.round(((new Scanner(System.in).nextInt() * 5) + 40) * 1.1));
	}
}