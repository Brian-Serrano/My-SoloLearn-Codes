import java.util.Scanner;

public class FruitBowl
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int fruit = input.nextInt();
        System.out.println(pie(fruit));
    }
    public static int pie(int fruit) {
        return fruit / 6;
    }
}