import java.util.Scanner;
import java.util.stream.Collectors;

public class DejaVu
{
    public static void main(String[] args) {
        String word = new Scanner(System.in).nextLine();
        System.out.println(word.chars().distinct().count() == word.length() ? "Unique" : "Deja Vu");
    }
}