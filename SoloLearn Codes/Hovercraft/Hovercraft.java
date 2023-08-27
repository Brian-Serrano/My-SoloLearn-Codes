import java.util.Scanner;

public class Hovercraft
{
    public static void main(String[] args) {
        int hover = new Scanner(System.in).nextInt();
        System.out.println(hover < 7 ? "Loss" : (hover == 7 ? "Broke Even" : "Profit"));
	}
}