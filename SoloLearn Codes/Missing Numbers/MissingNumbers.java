import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class MissingNumbers
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> numberSequence = Arrays
                .stream(new int[n])
                .map(a -> sc.nextInt())
                .boxed()
                .toList();
        System.out.println(IntStream
                .range(numberSequence
                        .stream()
                        .min(Comparator.comparingInt(a -> a))
                        .orElse(0), numberSequence.stream()
                        .max(Comparator.comparingInt(a -> a))
                        .orElse(0))
                .filter(a -> !numberSequence.contains(a))
                .mapToObj(String::valueOf)
                .collect(Collectors.joining(" ")));
	}
}