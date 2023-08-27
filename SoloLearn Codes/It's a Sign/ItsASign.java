import java.util.Arrays;
import java.util.Scanner;

public class ItsASign
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println(Arrays
                .stream(new String[4])
                .map(w -> sc.nextLine().trim())
                .anyMatch(w -> w.equals(new StringBuilder(w)
                        .reverse()
                        .toString())) ? "Open" : "Trash");
    }
}