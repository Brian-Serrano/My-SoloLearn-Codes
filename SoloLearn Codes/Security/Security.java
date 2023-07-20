import java.util.Scanner;

public class Security
{
    public static void main(String[] args) {
       System.out.println(message(new Scanner(System.in).nextLine()));
    }
    
    public static String message(String data) {
        String ft = data.replace("x","");
        int thief = ft.indexOf('T');
        return (ft.charAt(thief + 1 >= ft.length() ? thief : thief + 1) == '$') || (ft.charAt(thief - 1 < 0 ? thief : thief - 1) == '$') ? "ALARM" : "quiet";
    }
}