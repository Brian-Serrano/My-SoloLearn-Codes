import java.util.Arrays;
import java.util.Scanner;

public class Divisible
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        sc.nextLine();
        String[] testNumbers = sc.nextLine().split(" ");
        System.out.println(Arrays
                .stream(testNumbers)
                .allMatch(a -> number % Integer.parseInt(a) == 0) ? "divisible by all" : "not divisible by all");
    }
}