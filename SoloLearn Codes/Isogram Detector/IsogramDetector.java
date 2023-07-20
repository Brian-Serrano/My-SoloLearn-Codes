import java.util.*;

public class IsogramDetector
{
    public static void main(String[] args) {
        String str = new Scanner(System.in).nextLine().toLowerCase();
        System.out.println(str.chars().distinct().count() == str.length());
	}
}