import java.util.*;
import java.text.*;

public class DayOfTheWeek
{
	public static void main(String[] args) throws ParseException {
		String s = new Scanner(System.in).nextLine();
		Date date = Character.isLetter(s.charAt(0)) ? new SimpleDateFormat("MMMM dd, yyyy").parse(s) : new SimpleDateFormat("MM/dd/yyyy").parse(s);
		System.out.println(new SimpleDateFormat("EEEE").format(date));
	}
}