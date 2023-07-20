import java.util.Scanner;

public class FlowingWords
{
    public static void main(String[] args) {
        System.out.println(match(new Scanner(System.in).nextLine().toLowerCase().split(" ")));
	}

    public static boolean match(String[] words) {
        for(int i = 0; i < words.length - 1; i++) {
            if(words[i].charAt(words[i].length() - 1) != words[i + 1].charAt(0)) return false;
        }
        return true;
    }
}