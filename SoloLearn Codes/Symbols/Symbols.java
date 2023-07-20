import java.util.Scanner;

public class Symbols
{
	public static void main(String[] args) {
		System.out.println(removeSymbols(new Scanner(System.in).nextLine()));
	}

	public static String removeSymbols(String text) {
		return text.replaceAll("[^a-zA-Z0-9\\s]", "");
	}
}