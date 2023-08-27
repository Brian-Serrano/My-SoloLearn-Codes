import java.util.Scanner;

public class Security
{
    public static void main(String[] args) {
        String data = new Scanner(System.in).nextLine();
        String ft = data.replace("x","");
        int thief = ft.indexOf('T');
        System.out.println((ft.charAt(thief + 1 >= ft.length() ? thief : thief + 1) == '$') || (ft.charAt(thief - 1 < 0 ? thief : thief - 1) == '$') ? "ALARM" : "quiet");
    }
}