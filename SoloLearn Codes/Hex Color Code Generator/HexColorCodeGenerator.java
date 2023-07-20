import java.util.Scanner;

public class HexColorCodeGenerator
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("#");
        for (int i = 0; i < 3; i++) {
            int d = sc.nextInt();
            System.out.print(Integer.toHexString(d));
        }
	}
}