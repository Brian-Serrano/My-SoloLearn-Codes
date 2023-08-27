import java.util.*;
import java.util.stream.*;

public class FlowingWords
{
    public static void main(String[] args) {
        String[] words = new Scanner(System.in).nextLine().toLowerCase().split(" ");
        System.out.println(IntStream
            .range(0, words.length - 1)
            .noneMatch(i -> words[i].charAt(words[i].length() - 1) != words[i + 1].charAt(0)));
	}
}