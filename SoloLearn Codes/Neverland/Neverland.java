import java.util.Scanner;

public class Neverland
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        int year = sc.nextInt();
        System.out.println("My twin is " + (age + year) + " years old and they are " + year + " years older than me");
	}
}