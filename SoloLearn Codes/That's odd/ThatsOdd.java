import java.util.Arrays;
import java.util.Scanner;

public class ThatsOdd
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int length = sc.nextInt();
        System.out.println(Arrays.stream(new int[length]).map(a -> sc.nextInt()).filter(a -> a % 2 == 0).sum());
    }
}