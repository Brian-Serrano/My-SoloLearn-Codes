import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class SuperSale
{
    public static void main(String[] args) {
        System.out.println(result(new Scanner(System.in).nextLine().split(",")));
    }

    public static int result(String[] price) {
        List<Double> parsedPrice = Arrays.stream(price).map(Double::parseDouble).toList();
        double max = parsedPrice.stream().max(Comparator.comparingDouble(a -> a)).orElse(0.0);
        double total = parsedPrice.stream().reduce((acc, next) -> acc + Math.floor(next)).orElse(0.0);
        return (int) (((total - max) * 1.07) * 0.3);
    }
}