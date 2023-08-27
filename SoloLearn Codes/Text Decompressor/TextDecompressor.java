import java.util.*;

public class TextDecompressor {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] s = input.nextLine().split("");
        for (int i = 0; i < s.length; i += 2) {
            System.out.print(s[i].repeat(Integer.parseInt(s[i + 1])));
        }
    }
}