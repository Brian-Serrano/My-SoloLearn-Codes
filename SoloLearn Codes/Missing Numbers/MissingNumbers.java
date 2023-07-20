import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class MissingNumbers
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(missingNumbers(Arrays
                .stream(new int[n])
                .map(a -> sc.nextInt())
                .boxed()
                .toList()));
	}

    public static String missingNumbers(List<Integer> numberSequence) {
        return IntStream
                .range(numberSequence
                        .stream()
                        .min(Comparator.comparingInt(a -> a))
                        .orElse(0), numberSequence.stream()
                        .max(Comparator.comparingInt(a -> a))
                        .orElse(0))
                .filter(a -> !numberSequence.contains(a))
                .mapToObj(String::valueOf)
                .collect(Collectors.joining(" "));
    }
}