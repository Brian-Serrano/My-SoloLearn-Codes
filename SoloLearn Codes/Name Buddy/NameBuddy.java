import java.util.Arrays;
import java.util.Scanner;

public class NameBuddy
{
    public static void main(String[] args) {
		Scanner input = new Scanner(System.in);	
		String[] names = input.nextLine().split(" ");	  
		String name = input.nextLine();
		System.out.println(Arrays
				.stream(names)
				.anyMatch(a -> a.charAt(0) == name.charAt(0)) ? "Compare notes" : "No such luck");
    }
}