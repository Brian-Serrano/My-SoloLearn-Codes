import java.util.Scanner;

public class MilitaryTime
{
    public static void main(String[] args) {
        String[] i = new Scanner(System.in).nextLine().split(":| ");
        System.out.println(i[2].equals("PM") ? Integer.parseInt(i[0]) + 12 + ":" + i[1] : i[0] + ":" + i[1]);
    }
}