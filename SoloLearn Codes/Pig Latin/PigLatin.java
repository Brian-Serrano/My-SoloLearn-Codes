import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.Collectors;

public class PigLatin {

    public static void main(String[] args) {
        System.out.println(Arrays
                .stream(new Scanner(System.in)
                        .nextLine()
                        .split(" "))
                .map(w -> w.substring(1) + w.charAt(0) + "ay")
                .collect(Collectors.joining(" ")));
    }
}