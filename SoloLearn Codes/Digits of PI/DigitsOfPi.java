import java.util.*;
import java.util.stream.IntStream;

public class DigitsOfPi {

    public static void main(String[] args) {
        int[] arr = IntStream.range(0, 3500 + 1).map(a -> 2000).toArray();
        StringBuilder sb = new StringBuilder();
        int carry = 0;
        for(int i = 3500; i > 0; i -= 14) {
            int sum = 0;
            for(int j = i; j > 0; j--) {
                sum = sum * j + 10000 * arr[j];
                arr[j] = sum % (j * 2 - 1);
                sum /= j * 2 - 1;
            }
            sb.append(String.format("%04d", carry + sum / 10000));
            carry = sum % 10000;
        }
        System.out.println(sb.toString().charAt(new Scanner(System.in).nextInt()));
    }
}