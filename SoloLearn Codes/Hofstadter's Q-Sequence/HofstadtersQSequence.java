import java.util.Scanner;

public class HofstadtersQSequence {
    public static int[] t;

    public static void main(String[] args) {
        t = new int[10000];
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        System.out.println(q(x));
    }

    public static int q(int n) {
        if (n > 2) {
            if (t[n] == 0) {
                t[n] = q(n - q(n - 1)) + q(n - q(n - 2));
            }
            return t[n];
        } else return 1;
    }
}