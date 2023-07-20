import java.util.Scanner;
import java.util.regex.*;

public class YoutubeLinkFinder
{
    public static void main(String[] args) {
        System.out.println(getVideoId(new Scanner(System.in).next().trim()));
    }
    
    public static String getVideoId(String link) {
        Matcher matcher = Pattern
                .compile("http(?:s)?:\\/\\/(?:m.)?(?:www\\.)?youtu(?:\\.be\\/|be\\.com\\/(?:watch\\?(?:feature=youtu.be\\&)?v=|v\\/|embed\\/|user\\/(?:[\\w#]+\\/)+))([^&#?\\n]+)", Pattern.CASE_INSENSITIVE)
                .matcher(link);
        return matcher.find() ? matcher.group(1) : "Please enter a valid youtube link";
    }
}