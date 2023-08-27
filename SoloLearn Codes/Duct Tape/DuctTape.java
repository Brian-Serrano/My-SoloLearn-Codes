import java.util.Scanner;

public class DuctTape
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        int height = sc.nextInt();
        int width = sc.nextInt();
        System.out.println((int) Math.ceil(((width * height) * 2) / 10.0));
	}
}