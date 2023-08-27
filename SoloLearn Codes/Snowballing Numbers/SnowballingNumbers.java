import java.util.*;

public class SnowballingNumbers
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int[] numbers = Arrays.stream(new int[number]).map(a -> sc.nextInt()).toArray();
        int[] index = new int[1];
        System.out.println(Arrays.stream(numbers).allMatch(a -> Arrays.stream(numbers).limit(index[0]++).sum() < a));
	}
}