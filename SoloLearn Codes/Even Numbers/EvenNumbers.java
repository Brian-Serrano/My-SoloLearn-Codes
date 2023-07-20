import java.util.Scanner;
import java.util.Arrays;
import java.util.stream.Collectors;

public class EvenNumbers
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] input = sc.nextLine().split(" ");
        System.out.println(Arrays
                .stream(input)
                .filter(a -> Integer.parseInt(a) % 2 == 0)
                .collect(Collectors.joining(" ")));
    }
}