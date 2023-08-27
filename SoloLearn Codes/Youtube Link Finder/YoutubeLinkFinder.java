import java.util.Scanner;
import java.util.regex.*;

public class YoutubeLinkFinder
{
    public static void main(String[] args) {
        String url = new Scanner(System.in).nextLine();
        System.out.println(url.contains("youtu.be") ? 
                url.substring("https://youtu.be/".length()) : 
                url.substring("https://www.youtube.com/watch?v=".length()));
    }
}