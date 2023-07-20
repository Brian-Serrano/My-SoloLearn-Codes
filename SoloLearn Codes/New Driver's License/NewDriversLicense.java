import java.util.*;

public class NewDriversLicense {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name = sc.nextLine();
		int agents = sc.nextInt();
		sc.nextLine();
		List<String> others = new ArrayList<>(Arrays.asList(sc.nextLine().split(" ")));
		System.out.println(getTime(name, agents, others));
	}

	public static int getTime(String name, int agents, List<String> others) {
		others.add(name);
		Collections.sort(others);
		return (others.indexOf(name) / agents + 1) * 20;
	}
}