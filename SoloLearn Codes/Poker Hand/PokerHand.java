import java.util.*;
import java.util.stream.IntStream;

public class PokerHand {

    public static void main(String[] args) {
        String[] hand = new Scanner(System.in).nextLine().split(" ");
        Map<String, Integer> rankValues = Map.ofEntries(
                Map.entry("2", 2),
                Map.entry("3", 3),
                Map.entry("4", 4),
                Map.entry("5", 5),
                Map.entry("6", 6),
                Map.entry("7", 7),
                Map.entry("8", 8),
                Map.entry("9", 9),
                Map.entry("10", 10),
                Map.entry("J", 11),
                Map.entry("Q", 12),
                Map.entry("K", 13),
                Map.entry("A", 14)
        );
        List<Integer> rank = Arrays.stream(hand)
                .map(c -> rankValues.get(c.substring(0, c.length() - 1)))
                .sorted(Comparator.reverseOrder())
                .toList();
        List<Integer> frequencies = rank.stream()
                .map(c -> Collections.frequency(rank, c)).toList();
        boolean suitFrequency = Arrays.stream(hand)
                .map(c -> c.charAt(c.length() - 1)).distinct().count() == 1;
        boolean rankOrder = IntStream.range(1, 5)
                .allMatch(n -> rank.get(n) + 1 == rank.get(n - 1));

        if(suitFrequency && rankOrder && rank.get(0) == 14) System.out.println("Royal Flush");
        else if(suitFrequency && rankOrder) System.out.println("Straight Flush");
        else if(frequencies.get(0) == 4 || frequencies.get(4) == 4)
            System.out.println("Four of a Kind");
        else if(Set.of(2, 3).equals(new HashSet<>(Arrays.asList(frequencies.get(4), frequencies.get(0)))))
            System.out.println("Full House");
        else if(suitFrequency) System.out.println("Flush");
        else if(rankOrder) System.out.println("Straight");
        else if(frequencies.get(2) == 3) System.out.println("Three of a Kind");
        else if(frequencies.get(1) == 2 && frequencies.get(3) == 2) System.out.println("Two Pairs");
        else if(rank.stream().distinct().filter(c -> Collections.frequency(rank, c) == 2).count() == 1)
            System.out.println("One Pair");
        else System.out.println("High Card");
    }
}