import java.util.Scanner;

public class CarrotCake
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int carrot = sc.nextInt();
        int box = sc.nextInt();
        System.out.println(leftOver(carrot, box));
    }
    
    public static String leftOver(int carrot, int box) {
        return carrot % box >= 7 ? "Cake Time" : "I need to buy " + (7 - (carrot % box)) + " more";
    }
}
