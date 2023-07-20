import java.util.Scanner;

public class HowFar
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String street = sc.nextLine();
        System.out.println(Math.abs(street.indexOf('H') - street.indexOf('P')) - 1);
    }
}