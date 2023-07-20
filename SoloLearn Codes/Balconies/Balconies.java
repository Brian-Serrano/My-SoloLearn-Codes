import java.util.Arrays;
import java.util.Scanner;

public class Balconies
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        int[] a = convert(sc.nextLine());
        int[] b = convert(sc.nextLine());
        System.out.println(findLarger(a, b));
	}

    public static String findLarger(int[] a, int[] b) {
        return a[0] * a[1] > b[0] * b[1] ? "Apartment A" : "Apartment B";
    }

    public static int[] convert(String nums) {
        return Arrays.stream(nums.split(",")).mapToInt(Integer::parseInt).toArray();
    }
}