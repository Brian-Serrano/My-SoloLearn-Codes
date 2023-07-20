import java.util.Scanner;

public class CheerCreator
{
    public static void main(String[] args) {
		System.out.println(cheer(new Scanner(System.in).nextInt()));
	}

    public static String cheer(int yard) {
        if (yard < 1) return "shh";
        if (yard > 10) return "High Five";
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < yard; i++) {
            sb.append("Ra!");
        }
        return sb.toString();
    }
}