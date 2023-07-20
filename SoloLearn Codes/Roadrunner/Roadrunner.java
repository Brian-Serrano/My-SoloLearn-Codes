import java.util.Scanner;

public class Roadrunner
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int safety = sc.nextInt();
        int runner = sc.nextInt();
        int coyote = sc.nextInt();
        System.out.println(message(safety, runner, coyote));
    }

    public static String message(int safety, int runner, int coyote) {
        return safety / runner < (safety + 50) / coyote ? "Meep Meep" : "Yum";
    }
}