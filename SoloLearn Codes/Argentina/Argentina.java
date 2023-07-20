import java.util.Scanner;

public class Argentina
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        int peso = sc.nextInt();
        int dollar = sc.nextInt();
        System.out.println(currency(peso, dollar));
	}

    public static String currency(int peso, int dollar) {
        return peso < dollar * 50 ? "Pesos" : "Dollars";
    }
}