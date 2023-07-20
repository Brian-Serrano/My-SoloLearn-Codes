import java.util.*;

public class ZipCodeValidator
{
    public static void main(String[] args) {
        String z = new Scanner(System.in).nextLine();
        long x = 0;
        for (int i = 0; i < z.length(); i++) if (!Character.isDigit(z.charAt(i))) x++;
        System.out.println(z.length() != 5 || z.matches(".*\s.*") || x > 0 ? "false" : "true");
	}
}