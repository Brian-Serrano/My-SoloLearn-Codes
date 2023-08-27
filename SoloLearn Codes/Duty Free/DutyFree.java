import java.util.Arrays;
import java.util.Scanner;

public class DutyFree
{
    public static void main(String[] args) {
        System.out.println(Arrays.stream(new Scanner(System.in).nextLine().split(" "))
                .anyMatch(a -> Double.parseDouble(a) >= 20/1.1) ? "Back to the store" : "On to the terminal");
    }
}