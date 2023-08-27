import java.util.regex.*;
import java.util.Scanner;

public class PasswordValidation
{
    public static void main(String[] args) {
        System.out.println(Pattern.matches("((?=.*[!@#$%&*])(?=.*[0-9]).{7,})", new Scanner(System.in).nextLine()) ? "Strong" : "Weak");
	}
}