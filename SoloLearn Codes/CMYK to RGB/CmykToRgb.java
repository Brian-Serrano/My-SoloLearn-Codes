import java.util.*;
import java.util.stream.*;

public class CmykToRgb {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double[] CMYK = Arrays.stream(new double[4])
                .map(x -> sc.nextDouble())
                .toArray();
        System.out.println(IntStream
                .range(0, 3)
                .mapToDouble(a -> 255 * (1 - CMYK[a]) * (1 - CMYK[3]))
                .mapToObj(a -> String.valueOf((int)Math.round(a)))
                .collect(Collectors.joining(",")));
    }
}