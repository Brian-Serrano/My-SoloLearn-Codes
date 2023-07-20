import java.util.List;
import java.util.Scanner;

public class ConvertUsDateToEuDate
{
    public static void main(String[] args) {
        System.out.println(euDate(new Scanner(System.in).nextLine()));
    }

    public static String euDate(String date) {
        List<String> months = List.of("January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December");
        if (date.charAt(0) > 47 && date.charAt(0) < 58)
        {
            String[] splittedDate = date.split("/");
            return splittedDate[1] + "/" + splittedDate[0] + "/" + splittedDate[2];
        }
        else
        {
            String[] splittedDate = date.split(" ");
            return splittedDate[1].substring(0, splittedDate[1].length() - 1) + "/" + (months.indexOf(splittedDate[0]) + 1) + "/" + splittedDate[2];
        }
    }
}