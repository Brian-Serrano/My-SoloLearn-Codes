import java.util.List;
import java.util.Scanner;
import java.util.regex.MatchResult;
import java.util.regex.Pattern;

public class Mathematics {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        sc.nextLine();
        List<String> expressions = Pattern.compile("\\(([^()]+)\\)")
                .matcher(sc.nextLine()).results()
                .map(MatchResult::group).toList();
        List<List<String>> tokens = expressions.stream()
                .map(e -> Pattern.compile("([0-9]+)|([+\\-*/])")
                        .matcher(e).results().map(MatchResult::group)
                        .toList())
                .toList();
        for(int x = 0; x < tokens.size(); x++) {
            int count = Integer.parseInt(tokens.get(x).get(0));
            for(int i = 1; i < tokens.get(x).size(); i += 2) {
                int n = Integer.parseInt(tokens.get(x).get(i + 1));
                String op = tokens.get(x).get(i);
                if(op.equals("+")) count += n;
                if(op.equals("-")) count -= n;
                if(op.equals("*")) count *= n;
                if(op.equals("/")) count /= n;
            }
            if(count == num) {
                System.out.println("index " + x);
                return;
            }
        }
        System.out.println("none");
    }
}