import java.util.Scanner;

public class TheSpyLife
{
    public static void main(String[] args) {
        System.out.println(new StringBuilder(new Scanner(System.in)
                .nextLine().replaceAll("[^a-zA-Z\\s]", ""))
                .reverse().toString());
    }
}