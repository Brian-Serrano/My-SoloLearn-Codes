import java.util.*;

public class WordRank {

    public static void main(String[] args) {
        System.out.println(findRank(new Scanner(System.in).nextLine()));
    }
    
    public static long findRank(String word) {
        long rank = 1;
        long suffixPermCount = 1;
        final Map<Character, Integer> charCounts = new HashMap<>();

        for (int i = word.length() - 1; i >= 0; i--) {
            char x = word.charAt(i);
            int xCount = charCounts.containsKey(x) ? charCounts.get(x) + 1 : 1;

            charCounts.put(x, xCount);

            for (Map.Entry<Character, Integer> e : charCounts.entrySet()) {
                if (e.getKey() < x) {
                    rank += suffixPermCount * e.getValue() / xCount;
                }
            }

            suffixPermCount *= word.length() - i;
            suffixPermCount /= xCount;
        }

        return rank;
    }
}