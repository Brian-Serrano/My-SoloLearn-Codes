import java.util.*;

public class LongestCommonSubstring
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        String firstWord = words[0];
        String longestCommonSubstring = firstWord.charAt(0) + "";

        for (int i = 0; i < firstWord.length(); i++) {
            for (int j = i + 2; j < firstWord.length() + 1; j++) {
                if (isSubstring(firstWord.substring(i, j), words))
                    if (firstWord.substring(i, j).length() > longestCommonSubstring.length())
                        longestCommonSubstring = firstWord.substring(i, j);

            }
        }
        System.out.println(longestCommonSubstring);
    }

    public static boolean isSubstring(String substring, String[] words) {
        int character = 0;
        for (String w : words) if (w.contains(substring)) character += 1;
        return character == words.length;
    }
}