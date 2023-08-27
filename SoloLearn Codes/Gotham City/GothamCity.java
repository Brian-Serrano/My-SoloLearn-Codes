import java.util.Scanner;

public class GothamCity
{
    public static void main(String[] args) {
        int criminal = new Scanner(System.in).nextInt();
        if(criminal < 5) System.out.println("I got this!");
        else if(criminal <= 10) System.out.println("Help me Batman");
        else System.out.println("Good Luck out there!");
	}
}