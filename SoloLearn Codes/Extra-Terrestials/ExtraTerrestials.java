import java.util.Scanner;

public class ExtraTerrestials
{
    public static void main(String[] args) {
        System.out.println(reverse(new Scanner(System.in).nextLine()));
    }

    public static String reverse(String text) {
        return new StringBuilder(text).reverse().toString();
    }
}