import java.util.Scanner;

public class SnapCrackleAndPop
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 6; i++) {
            int bowl = sc.nextInt();
            System.out.print(bowl % 3 == 0 ? "Pop " : bowl % 2 == 0 ? "Crackle " : "Snap ");
        }
	}
}