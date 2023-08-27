import java.util.*;
import java.util.stream.Collectors;

public class SecretMessage {

    public static void main(String[] args) {
        System.out.println(new Scanner(System.in)
                .nextLine()
                .toLowerCase()
                .chars()
                .mapToObj(c -> String.valueOf((char)(c >= 'a' && c <= 'z' ? (25 - (c - 'a')) + 'a' : c)))
                .collect(Collectors.joining()));
    }
}