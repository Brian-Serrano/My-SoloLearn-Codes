import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.Collectors;

public class CamelToSnake
{
	public static void main(String[] args) {
		System.out.println(Arrays
				.stream(new Scanner(System.in).nextLine().split(""))
				.map(a -> a.toUpperCase().equals(a) ? "_" + a.toLowerCase() : a)
				.collect(Collectors.joining())
				.replaceAll("^_+", ""));
	}
}