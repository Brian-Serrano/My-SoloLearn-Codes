import java.util.Scanner;

public class GuardFlamingos
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int w = sc.nextInt();
        System.out.println(getSum(l, w));
	}

    public static int getSum(int l, int w) {
        return l + w;
    }
}