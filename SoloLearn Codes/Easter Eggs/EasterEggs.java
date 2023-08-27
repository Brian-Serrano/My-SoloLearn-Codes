import java.util.Scanner;

public class EasterEggs
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int total = sc.nextInt();
        int me = sc.nextInt();
        int friend = sc.nextInt();
        System.out.println(total <= me + friend ? "Candy Time" : "Keep Hunting");
    }
}