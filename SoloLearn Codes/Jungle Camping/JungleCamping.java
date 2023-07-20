import java.util.Scanner;
import java.util.HashMap;

public class JungleCamping
{
    public static void main(String[] args) {
		System.out.println(animalSound(new Scanner(System.in).nextLine().split(" ")));
	}
    
    public static String animalSound(String[] animals) {
        HashMap<String, String> animalList = new HashMap<>();
        animalList.put("Grr", "Lion");
        animalList.put("Rawr", "Tiger");
        animalList.put("Ssss", "Snake");
        animalList.put("Chirp", "Bird");
        StringBuilder sb = new StringBuilder();
        for(String animal : animals) {
            if(animalList.containsKey(animal)) {
                sb.append(animalList.get(animal) + " ");
            }
        }
        return sb.toString();
    }
}