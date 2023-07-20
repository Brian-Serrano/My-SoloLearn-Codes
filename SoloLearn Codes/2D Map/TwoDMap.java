import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class TwoDMap
{
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        String[] row = sc.nextLine().trim().split(",");
        List<Point> points = new ArrayList<>();
        for(int i = 0; i < row.length; i++) {
            char[] col = row[i].toCharArray();
            for(int j = 0; j < col.length; j++) {
                if(col[j] == 'P') {
                    points.add(new Point(i, j));
                }
            }
        }
        System.out.println(Math.abs(points.get(0).y - points.get(1).y) + Math.abs(points.get(0).x - points.get(1).x));
	}
}

class Point {
    public int x, y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}