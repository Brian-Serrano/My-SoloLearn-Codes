import java.util.*;

public class LongestCommonSubstring {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        String firstWord = words[0];
        String longestCommonSubstring = String.valueOf(firstWord.charAt(0));

        for (int i = 0; i < firstWord.length(); i++) {
            for (int j = i + 2; j < firstWord.length() + 1; j++) {
                String sub = firstWord.substring(i, j);
                if (Arrays.stream(words).filter(w -> w.contains(sub)).count() == words.length)
                    if (sub.length() > longestCommonSubstring.length())
                        longestCommonSubstring = sub;

            }
        }
        System.out.println(longestCommonSubstring);
    }
}