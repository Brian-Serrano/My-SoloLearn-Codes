import java.util.*;

public class TaxFree
{
    public static void main(String[] args) {
        System.out.print(Arrays
                .stream(new Scanner(System.in).nextLine().split(","))
                .map(Double::parseDouble)
                .map(a -> a < 20 ? a * 1.07 : a)
                .reduce(Double::sum)
                .orElse(0.0));
	}
}