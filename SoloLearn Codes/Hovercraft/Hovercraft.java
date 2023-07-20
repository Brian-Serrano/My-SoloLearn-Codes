import java.util.Scanner;

public class Hovercraft
{
    public static void main(String[] args) {
        System.out.println(getMessage(new Scanner(System.in).nextInt()));
	}
    
    public static String getMessage(int hover) {
        return hover < 7 ? "Loss" : (hover == 7 ? "Broke Even" : "Profit");
    }
}