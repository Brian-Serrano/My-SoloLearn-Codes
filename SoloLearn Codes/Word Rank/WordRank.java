import java.util.*;

public class WordRank {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String[] arr = input.split("");
        ArrayList<String> sorted = new ArrayList<>(Arrays.asList(arr));
        Collections.sort(sorted);

        int sum = 0;
        int[] fac = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < sorted.size(); j++) {
                if (arr[i].equals(sorted.get(j))) {
                    fac[i] = j;
                    sorted.remove(j);
                    break;
                }

            }
            sum += fac[i] * fact(arr.length - 1 - i) / findCommonFact(input.substring(i));
        }
        System.out.println(++sum);
    }

    public static int findCommonFact(String a) {
        String[] alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".split("");
        int result = 1;
        ArrayList<Integer> common = new ArrayList<>();
        for (String s : alphabet) {
            int count = a.length() - a.replace(s, "").length();
            if (count > 1)
                common.add(count);

        }
        for (int integer : common) {
            result *= fact(integer);
        }
        return result;
    }


    public static int fact(int n) {
        if (n <= 1) return 1;
        else return fact(n - 1) * n;
    }
}