import java.util.Scanner;

public class MilitaryTime
{
    public static void main(String[] args) {
        System.out.println(getTime(new Scanner(System.in).nextLine().split(":| ")));
    }

    public static String getTime(String[] input) {
        return input[2].equals("PM") ? Integer.parseInt(input[0]) + 12 + ":" + input[1] : input[0] + ":" + input[1];
    }
}