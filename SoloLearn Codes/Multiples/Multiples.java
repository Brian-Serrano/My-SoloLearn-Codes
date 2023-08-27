import java.util.Scanner;
import java.util.stream.IntStream;

public class Multiples
{
    public static void main(String[] args) {
        int num = new Scanner(System.in).nextInt();
        System.out.println(IntStream.range(0, num).filter(a -> a % 3 == 0 || a % 5 == 0).sum());
	}
}