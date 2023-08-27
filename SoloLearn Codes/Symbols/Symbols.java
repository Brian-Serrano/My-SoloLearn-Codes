import java.util.Scanner;

public class Symbols
{
	public static void main(String[] args) {
		System.out.println(new Scanner(System.in).nextLine().replaceAll("[^a-zA-Z0-9\\s]", ""));
	}
}