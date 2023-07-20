import java.util.Scanner;

public class Candles
{
    public static void main(String[] args) {
        System.out.println(candles(new Scanner(System.in).nextInt()));
	}
    public static int candles(int friends) {
        return (friends + 1) * 9;
    }
}