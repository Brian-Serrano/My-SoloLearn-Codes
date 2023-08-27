import java.util.Scanner;

public class Popsicles
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int siblings = sc.nextInt();
        int popsicles = sc.nextInt();
        System.out.println(popsicles % siblings == 0 ? "give away" : "eat them yourself");
    }
}