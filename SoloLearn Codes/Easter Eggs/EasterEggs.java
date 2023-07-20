import java.util.Scanner;

public class EasterEggs
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        int total = sc.nextInt();
        int me = sc.nextInt();
        int friend = sc.nextInt();
        System.out.println(getMessage(total, me, friend));
	}
    
    public static String getMessage(int total, int me, int friend) {
        return total <= me + friend ? "Candy Time" : "Keep Hunting";
    }
}