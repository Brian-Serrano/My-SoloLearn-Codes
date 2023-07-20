import java.util.HashMap;
import java.util.Scanner;

public class BallparkOrders
{
    public static void main(String[] args){
        System.out.println(getTotal(new Scanner(System.in).nextLine().split(" ")));
    }

    public static double getTotal(String[] orders) {
        HashMap<String, Double> menu = new HashMap<>();
        menu.put("Nachos", 6.00);
        menu.put("Pizza", 6.00);
        menu.put("Cheeseburger", 10.00);
        menu.put("Water", 4.00);
        menu.put("Coke", 5.00);
        double total = 0.0;
        for(String order : orders) {
            total += menu.containsKey(order) ? menu.get(order) : menu.get("Coke");
        }
        return Math.round((total * 1.07) * 100.0) / 100.0;
    }
}