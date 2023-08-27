#include <iostream>
#include <vector>

using namespace std;

int main() {
    float x;
    vector<float> CMYK;
    for (int i = 0; i < 4; i++) {
        cin >> x;
        CMYK.push_back(x);
    }
    for(int i = 0; i < 3; i++) {
        printf((i == 0) ? "%.f" : ",%.f", 255 * (1 - CMYK[i]) * (1 - CMYK[3]));
    }
    return 0;
}