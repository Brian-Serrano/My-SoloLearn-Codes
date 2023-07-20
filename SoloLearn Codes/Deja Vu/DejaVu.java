import java.util.Scanner;
import java.util.stream.Collectors;

public class DejaVu
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        System.out.println(removeDuplicates(word).length() == word.length() ? "Unique" : "Deja Vu");
    }
    public static String removeDuplicates(String str) {
        return str.chars()
                .distinct()
                .mapToObj(c -> String.valueOf((char) c))
                .collect(Collectors.joining());
    }
}