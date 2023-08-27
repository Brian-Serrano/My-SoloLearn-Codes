import java.util.*;

public class BallparkOrders
{
    public static void main(String[] args) {
        String[] orders = new Scanner(System.in).nextLine().split(" ");
        Map<String, Double> menu = Map.of(
                "Nachos", 6.00, "Pizza", 6.00,
                "Cheeseburger", 10.00, "Water", 4.00,
                "Coke", 5.00);
        double total = Arrays.stream(orders)
                .mapToDouble(c -> menu.containsKey(c) ? menu.get(c) : menu.get("Coke"))
                .sum();
        System.out.println(Math.round((total * 1.07) * 100.0) / 100.0);
    }
}