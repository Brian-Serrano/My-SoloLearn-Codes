import java.util.*;
import java.text.*;

public class DayOfTheWeek
{
	public static void main(String[] args) throws ParseException {
		String s = new Scanner(System.in).nextLine();
		Date date = new SimpleDateFormat(Character.isLetter(s.charAt(0)) ? "MMMM dd, yyyy" : "MM/dd/yyyy").parse(s);
		System.out.println(new SimpleDateFormat("EEEE").format(date));
	}
}