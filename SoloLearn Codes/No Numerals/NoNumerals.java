import java.util.List;
import java.util.Scanner;

public class NoNumerals
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] text = sc.nextLine().split("");
        List<String> numbers = List.of("zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten");
        
        for(int i = 0; i < text.length; i++) {
            if(text[i].matches("1") && text[i + 1].matches("0")) {
                text[i] = numbers.get(10);
                text[i + 1] = "";
            }
            else if(text[i].matches("[0-9]")) {
                text[i] = numbers.get(Integer.parseInt(text[i]));
            }
            System.out.print(text[i]);
        }
    }
}