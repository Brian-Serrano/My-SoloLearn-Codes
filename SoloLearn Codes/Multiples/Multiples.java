import java.util.Scanner;
import java.util.stream.IntStream;

public class Multiples
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(arcade(num));
	}
    public static int arcade(int num){
        return IntStream.range(0, num).filter(a -> a % 3 == 0 || a % 5 == 0).sum();
    }
}