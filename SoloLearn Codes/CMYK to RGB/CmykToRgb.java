import java.util.*;
import java.util.stream.Collectors;

public class CmykToRgb {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double[] CMYK = new double[4];
        for (int i = 0; i < CMYK.length; i++) CMYK[i] = sc.nextDouble();
        double[] RGB = new double[3];
        for (int i = 0; i < RGB.length; i++) RGB[i] = 255 * (1 - CMYK[i]) * (1 - CMYK[3]);
        System.out.println(Arrays
                .stream(RGB)
                .mapToObj(a -> String.valueOf((int)Math.round(a)))
                .collect(Collectors.joining(",")));
    }
}