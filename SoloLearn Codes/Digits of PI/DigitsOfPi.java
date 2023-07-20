import java.util.*;
import java.lang.*;
import java.lang.reflect.*;
import java.math.*;

public class DigitsOfPi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        System.out.println(Array.get(Pi.pi(200).toString().toCharArray(), x + 1));
    }
}

final class Pi {

    private static final BigDecimal TWO = new BigDecimal("2");
    private static final BigDecimal FOUR = new BigDecimal("4");
    private static final BigDecimal FIVE = new BigDecimal("5");
    private static final BigDecimal TWO_THIRTY_NINE = new BigDecimal("239");

    private Pi() {
    }

    public static BigDecimal pi(int numDigits) {
        int calcDigits = numDigits + 10;

        return FOUR.multiply((FOUR.multiply(arccot(FIVE, calcDigits)))
                        .subtract(arccot(TWO_THIRTY_NINE, calcDigits)))
                .setScale(numDigits, RoundingMode.DOWN);
    }

    private static BigDecimal arccot(BigDecimal x, int numDigits) {
        BigDecimal unity = BigDecimal.ONE.setScale(numDigits, RoundingMode.DOWN);
        BigDecimal sum = unity.divide(x, RoundingMode.DOWN);
        BigDecimal xpower = new BigDecimal(sum.toString());
        BigDecimal term = null;

        boolean add = false;

        for (BigDecimal n = new BigDecimal("3");
             term == null || term.compareTo(BigDecimal.ZERO) != 0; n = n.add(TWO)) {
            xpower = xpower.divide(x.pow(2), RoundingMode.DOWN);
            term = xpower.divide(n, RoundingMode.DOWN);
            sum = add ? sum.add(term) : sum.subtract(term);
            add = !add;
        }
        return sum;
    }
}