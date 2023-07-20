import java.util.*;

public class SecretMessage
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] text = sc.nextLine().toLowerCase().split("");
        String[] alphabet = "abcdefghijklmnopqrstuvwxyz".split("");
        StringBuilder result = new StringBuilder();
        for(int i = 0; i < text.length; i++){
            if(text[i].equals(" ")) {
                result.append(" ");
                continue;
            }
            for(int j = 0; j < 26; j++) {
                if(text[i].equals(alphabet[j])) {
                    result.append(alphabet[25 - j]);
                    break;
                }
            }
        }
        System.out.print(result);
    }
}