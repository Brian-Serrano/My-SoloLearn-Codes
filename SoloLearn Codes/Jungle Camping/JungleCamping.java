import java.util.*;
import java.util.stream.*;

public class JungleCamping
{
    public static void main(String[] args) {
        String[] animals = new Scanner(System.in).nextLine().split(" ");
        Map<String, String> animalList = Map.of("Grr", "Lion", "Rawr", "Tiger", "Ssss", "Snake", "Chirp", "Bird");
		System.out.println(Arrays.stream(animals)
                .filter(a -> animalList.containsKey(a))
                .map(a -> animalList.get(a))
                .collect(Collectors.joining(" ")));
	}
}