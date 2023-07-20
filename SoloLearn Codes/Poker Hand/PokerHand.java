import java.util.*;

public class PokerHand {
    public static void Sop(String p) {
        System.out.println(p);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        s = s.replace("2", "02").replace("3", "03").replace("4", "04").replace("5", "05")
                .replace("6", "06").replace("7", "07").replace("8", "08").replace("9", "09")
                .replace("J", "11").replace("Q", "12").replace("K", "13").replace("A", "14");

        String[] vs = {"02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13", "14"};

        ArrayList<Integer> hV = new ArrayList<>();
        hV.clear();
        for (String v : vs) {
            int nV = s.length() - s.replace(v, "").length();
            if (nV != 0) hV.add(nV / 2);
        }

        String[] suits = {"H", "S", "C", "D"};
        boolean suited = false;
        for (String su : suits) {
            int nSu = s.length() - s.replace(su, "").length();
            if (nSu == 5) {
                suited = true;
                break;
            }
        }

        String wos = s.replace("H", "").replace("C", "").replace("S", "").replace("D", "");
        int[] wosLst = Arrays.stream(wos.split(" ")).mapToInt(Integer::parseInt).toArray();
        int sm = Arrays.stream(wosLst).sum();
        int mn = Arrays.stream(wosLst).min().getAsInt();
        int mx = Arrays.stream(wosLst).max().getAsInt();
        int ln = hV.size();

        if (hV.contains(2) && ln == 4) Sop("One Pair");
        else if (hV.contains(2) && ln == 3) Sop("Two Pairs");
        else if (hV.contains(3) && ln == 3) Sop("Three of a Kind");
        else if (hV.contains(3) && ln == 2) Sop("Full House");
        else if (hV.contains(4) && ln == 2) Sop("Four of a Kind");
        else if (suited && mx - mn == 4 && mx == 14 && ln == 5) Sop("Royal Flush");
        else if (suited && mx - mn == 4 && ln == 5) Sop("Straight Flush");
        else if (suited && mx - mn == 12 && mx == 14 && sm == 28 && ln == 5) Sop("Straight Flush");
        else if (mx - mn == 12 && mx == 14 && sm == 28 && ln == 5) Sop("Straight");
        else if (mx - mn == 4 && ln == 5) Sop("Straight");
        else if (suited) Sop("Flush");
        else if (!hV.contains(2) && !hV.contains(3) && !hV.contains(4) && mx - mn != 4) Sop("High Card");
    }
}