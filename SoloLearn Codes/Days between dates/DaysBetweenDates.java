import java.util.*;
import java.util.concurrent.*;
import java.lang.*;
import java.text.*;

public class DaysBetweenDates
{
    public static void main(String[] args) throws ParseException {
        Scanner input = new Scanner(System.in);
        String s1 = input.nextLine();
        String s2 = input.nextLine();
        SimpleDateFormat dtFmt = new SimpleDateFormat("MMMM dd, yyyy");
        System.out.println(TimeUnit.MILLISECONDS.toDays(Math.abs(dtFmt.parse(s2).getTime() - dtFmt.parse(s1).getTime())));
	}
}