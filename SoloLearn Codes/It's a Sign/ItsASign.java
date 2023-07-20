import java.util.Arrays;
import java.util.Scanner;

public class ItsASign
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        String[] words = new String[4];
        for(int i = 0; i < words.length; i++) {
            words[i] = sc.nextLine().trim();
        }
        System.out.println(palindrome(words));
	}

    public static String palindrome(String[] words) {
        return Arrays
                .stream(words)
                .anyMatch(w -> w.equals(new StringBuilder(w)
                        .reverse()
                        .toString())) ? "Open" : "Trash";
    }
}