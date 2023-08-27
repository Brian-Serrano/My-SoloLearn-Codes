import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Locale;
import java.util.Scanner;

public class ConvertUsDateToEuDate
{
    public static void main(String[] args) {
        String dateStr = new Scanner(System.in).nextLine();
        LocalDate date = LocalDate.parse(dateStr, DateTimeFormatter
                .ofPattern(Character.isDigit(dateStr.charAt(0)) ? 
                        "M/d/u" : "MMMM d, u", Locale.ENGLISH));
        System.out.println(date.format(DateTimeFormatter.ofPattern("d/M/yyyy")));
    }
}