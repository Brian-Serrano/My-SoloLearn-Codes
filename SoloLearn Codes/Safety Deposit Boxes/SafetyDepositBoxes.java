import java.util.Arrays;
import java.util.Scanner;

public class SafetyDepositBoxes
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] items = sc.nextLine().split(",");
        String item = sc.nextLine();
        System.out.println((Arrays.stream(items).toList().indexOf(item) + 1) * 5);
    }
}