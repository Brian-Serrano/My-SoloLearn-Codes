import java.util.Scanner;

public class SkeeBall
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int points = sc.nextInt();
        int tickets = sc.nextInt();
        System.out.println(points / 12 >= tickets ? "Buy it!" : "Try again");
    }
}