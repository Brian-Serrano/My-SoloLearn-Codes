import java.util.*;
import java.util.regex.MatchResult;
import java.util.regex.Pattern;
import java.util.stream.Collectors;

public class SplittingString {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String text = sc.nextLine();
        int count = sc.nextInt();
        System.out.println(Pattern
                .compile(".{1," + count + "}")
                .matcher(text).results()
                .map(MatchResult::group)
                .collect(Collectors.joining("-")));
    }
}