import java.util.Scanner;

public class PigLatin
{
    public static void main(String[] args) {
		System.out.println(translate(new Scanner(System.in).nextLine().split(" ")));
	}

    public static String translate(String[] words) {
        StringBuilder sb = new StringBuilder();
        for(String word : words) {
            sb.append(word.substring(1, word.length()) + word.charAt(0) + "ay ");
        }
        return sb.toString();
    }
}