import java.util.*;

public class SnowballingNumbers
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int[] numbers = Arrays.stream(new int[number]).map(a -> sc.nextInt()).toArray();
        System.out.println(getNumber(numbers));
	}

    public static boolean getNumber(int[] numbers) {
        int[] index = new int[1];
        return Arrays.stream(numbers).allMatch(a -> Arrays.stream(numbers).limit(index[0]++).sum() < a);
    }
}