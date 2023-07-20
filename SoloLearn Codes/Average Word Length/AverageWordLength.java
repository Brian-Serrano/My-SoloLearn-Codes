import java.util.Arrays;
import java.util.Scanner;

public class AverageWordLength
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String[] input = sc.nextLine().replaceAll("[\\p{Punct}]", "").split(" ");
		System.out.print((int)Math
				.ceil((double)Arrays
						.stream(input)
						.mapToInt(String::length)
						.sum() / input.length));
	}
}