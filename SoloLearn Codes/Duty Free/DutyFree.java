import java.util.Arrays;
import java.util.Scanner;

public class DutyFree
{
    public static void main(String[] args) {
        System.out.println(getPrice(new Scanner(System.in).nextLine().split(" ")));
    }
    public static String getPrice(String[] price) {
        return Arrays
                .stream(price)
                .anyMatch(a -> Double.parseDouble(a) >= 20/1.1) ? "Back to the store" : "On to the terminal";
    }
}