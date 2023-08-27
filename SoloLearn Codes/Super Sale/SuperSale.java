import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class SuperSale
{
    public static void main(String[] args) {
        String[] price = new Scanner(System.in).nextLine().split(",");
        List<Double> parsedPrice = Arrays.stream(price).map(Double::parseDouble).toList();
        double max = parsedPrice.stream().max(Comparator.comparingDouble(a -> a)).orElse(0.0);
        double total = parsedPrice.stream().reduce(0.0, (acc, next) -> acc + Math.floor(next));
        System.out.println((int) (((total - max) * 1.07) * 0.3));
    }
}