import java.util.regex.*;
import java.util.Scanner;

public class PasswordValidation
{
    public static void main(String[] args) {
        System.out.println(validate(new Scanner(System.in).nextLine()));
	}
    
    public static String validate(String password) {
        return Pattern.matches("((?=.*[!@#$%&*])(?=.*[0-9]).{7,})", password) ? "Strong" : "Weak";
    }
}