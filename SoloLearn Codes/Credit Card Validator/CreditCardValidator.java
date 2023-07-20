import java.util.*;

public class CreditCardValidator
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);           
        String str = sc.nextLine();
        System.out.println(isValid(new StringBuilder(str).reverse().toString()) ? "valid" : "not valid");
	}

    public static boolean isValid(String candidate) {
        int[] digits = Arrays
                .stream(candidate.split(""))
                .mapToInt(Integer::parseInt)
                .toArray();
        for(int i = 1; i < digits.length; i += 2) {
            digits[i] *= 2;
            if(digits[i] > 9) digits[i] -= 9;
        }
        return Arrays.stream(digits).sum() % 10 == 0 && digits.length == 16;
    }
}