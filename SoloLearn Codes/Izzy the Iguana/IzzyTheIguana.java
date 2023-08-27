import java.util.Arrays;
import java.util.Scanner;
import java.util.Map;

public class IzzyTheIguana
{
    public static void main(String[] args) {
        String[] snacks = new Scanner(System.in).nextLine().split(" ");
        Map<String, Integer> snackList = Map.of("Lettuce", 5, "Carrot", 4, "Mango", 9, "Cheeseburger", 0);
        System.out.println(Arrays
                .stream(snacks)
                .mapToInt(c -> snackList.getOrDefault(c, 0))
                .sum() >= 10 ? "Come on Down!" : "Time to wait");
	}
}