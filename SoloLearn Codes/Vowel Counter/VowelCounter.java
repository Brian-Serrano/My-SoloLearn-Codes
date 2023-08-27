import java.util.*;

public class VowelCounter
{
    public static void main(String[] args) {
        String[] sentence = new Scanner(System.in).nextLine().trim().toLowerCase().split("");
        System.out.println(Arrays.stream(sentence).filter(s -> "aeiou".contains(s)).count());
	}
}