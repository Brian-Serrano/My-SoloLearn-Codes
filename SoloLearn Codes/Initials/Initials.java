import java.util.*;
import java.util.stream.Collectors;

public class Initials
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        System.out.println(Arrays
                .stream(new String[n])
                .map(a -> sc.nextLine().split(" "))
                .map(a -> String.valueOf(a[0].charAt(0)) + a[1].charAt(0))
                .collect(Collectors.joining(" ")));
    }
}