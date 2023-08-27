import java.util.Arrays;
import java.util.Scanner;

public class BuildingBlocks
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println(Arrays
                .stream(new int[4])
                .map(a -> sc.nextInt() % 15)
                .sum());
    }
}