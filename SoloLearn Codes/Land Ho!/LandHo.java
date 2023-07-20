import java.util.Scanner;

public class LandHo
{
    public static void main(String[] args) {
        System.out.println(total(new Scanner(System.in).nextInt()));
	}

    public static int total(int people) {
        return 10 + (people / 20) * 20;
    }
}