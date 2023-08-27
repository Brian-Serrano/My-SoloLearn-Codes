import java.util.Scanner;

public class CheerCreator
{
    public static void main(String[] args) {
        int yard = new Scanner(System.in).nextInt();
        if (yard < 1) System.out.println("shh");
        else if (yard > 10) System.out.println("High Five");
        else System.out.println("Ra!".repeat(yard));
	}
}