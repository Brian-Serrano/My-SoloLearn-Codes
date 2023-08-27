import java.util.Scanner;

public class Roadrunner
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int safety = sc.nextInt();
        int runner = sc.nextInt();
        int coyote = sc.nextInt();
        System.out.println(safety / runner < (safety + 50) / coyote ? "Meep Meep" : "Yum");
    }
}