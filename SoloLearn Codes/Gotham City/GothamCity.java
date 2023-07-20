import java.util.Scanner;

public class GothamCity
{
    public static void main(String[] args) {
        System.out.println(getMessage(new Scanner(System.in).nextInt()));
	}

    public static String getMessage(int criminal) {
        if(criminal < 5)
            return "I got this!";
        else if(criminal <= 10)
            return "Help me Batman";
        else
            return "Good Luck out there!";
    }
}