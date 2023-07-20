import java.util.*;

public class SplittingString
{
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
		String[] text = input.nextLine().split("");
		int step = input.nextInt();
		System.out.println(splittedString(text, step));
	}

    public static String splittedString(String[] text, int step) {
        for(int i = 0; i < text.length - 1; i++) {
            if((i + 1) % step == 0) text[i] += "-";
        }
        return String.join("", text);
    }
}