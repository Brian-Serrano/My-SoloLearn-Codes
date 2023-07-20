import java.util.*;
import java.lang.*;

public class TextDecompressor
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		char[] s = input.nextLine().toCharArray();
		for (int i = 0; i < s.length; i++) {
			if (Character.isDigit(s[i]))
				System.out.print(String.valueOf(s[i - 1]).repeat(Character.getNumericValue(s[i])));
		} 
	}
}