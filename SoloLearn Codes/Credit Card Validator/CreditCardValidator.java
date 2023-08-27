import java.util.*;

public class CreditCardValidator
{
    public static void main(String[] args) {
        String candidate = new StringBuilder(new Scanner(System.in).nextLine()).reverse().toString();
        int[] digits = Arrays
                .stream(candidate.split(""))
                .mapToInt(Integer::parseInt)
                .toArray();
        for(int i = 1; i < digits.length; i += 2) {
            digits[i] *= 2;
            if(digits[i] > 9) digits[i] -= 9;
        }
        System.out.println(Arrays.stream(digits).sum() % 10 == 0 && digits.length == 16 ? "valid" : "not valid");
	}
}