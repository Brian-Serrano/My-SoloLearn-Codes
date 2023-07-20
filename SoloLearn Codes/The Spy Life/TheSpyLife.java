import java.util.Scanner;

public class TheSpyLife
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        StringBuilder result = new StringBuilder();
        for(int i = 0; i < str.length(); i++) {
            if(Character.isLetter(str.charAt(i)) || str.charAt(i) == ' ') {
                result.append(str.charAt(i));
            }
        }
        System.out.println(result.reverse().toString());
    }
}