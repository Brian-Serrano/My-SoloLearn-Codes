import java.util.Scanner;
import java.util.HashMap;

public class IzzyTheIguana
{
    public static void main(String[] args) {
        System.out.println(getMessage(new Scanner(System.in).nextLine().split(" ")));
	}
    
    public static String getMessage(String[] snacks) {
        HashMap<String, Integer> snackList = new HashMap<>();
        snackList.put("Lettuce", 5);
        snackList.put("Carrot", 4);
        snackList.put("Mango", 9);
        snackList.put("Cheeseburger", 0);
        int sum = 0;
        for(String snack : snacks) {
            if(snackList.containsKey(snack)) {
                sum += snackList.get(snack);
            }
        }
        return sum >= 10 ? "Come on Down!" : "Time to wait";
    }
}