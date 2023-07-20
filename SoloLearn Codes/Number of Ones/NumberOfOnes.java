import java.util.*;

public class NumberOfOnes {
    public static void main(String[] args) {
        System.out.print(Integer.toString(new Scanner(System.in).nextInt(), 2).chars().filter(ch -> ch == '1').count());
    }
}