import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class NoNumerals {

    public static void main(String[] args) {
        List<String> numbers = List.of("zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten");
        System.out.println(Arrays.stream(new Scanner(System.in)
                .nextLine().split(" "))
                .map(t -> t.matches("[0-9]+") ? numbers.get(Integer.parseInt(t)) : t)
                .collect(Collectors.joining(" ")));
    }
}