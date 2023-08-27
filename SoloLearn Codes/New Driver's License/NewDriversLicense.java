import java.util.*;

public class NewDriversLicense {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String n = sc.nextLine();
		int a = sc.nextInt();
		sc.nextLine();
		long pos = Arrays.stream(sc.nextLine().split(" ")).filter(s -> s.compareTo(n) < 0).count();
		System.out.println((pos / a + 1) * 20);
	}
}