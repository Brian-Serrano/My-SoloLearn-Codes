import java.util.*;

public class VowelCounter
{
    public static void main(String[] args) {
        System.out.println(vowelCount(new Scanner(System.in).nextLine().trim().toLowerCase().split("")));
	}

    public static long vowelCount(String[] sentence) {
        String vowels = "aeiou";
        return Arrays.stream(sentence).filter(s -> vowels.contains(s)).count();
    }
}