#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct point {
    int x, y;
} Point;

Point CreatePoint(int dx, int dy) {
    Point p;
    p.x = dx;
    p.y = dy;
    return p;
}

int main() {
    vector<Point> ps;
    string s;
    int i = -1;
    while (getline(cin, s, ',')) {
        i++;
        for (size_t j = 0; j < s.length(); j++) {
            if (s[j] == 'P') {
                ps.push_back(CreatePoint(i, j));
            }
        }
    }
    cout << abs(ps[0].x - ps[1].x) + abs(ps[0].y - ps[1].y);
    return 0;
}