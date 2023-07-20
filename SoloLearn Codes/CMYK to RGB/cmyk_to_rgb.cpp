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

    float RGB[3];
    for(int i = 0; i < 3; i++) RGB[i] = 255 * (1 - CMYK[i]) * (1 - CMYK[3]);

    int idx = 0;
    for (auto x : RGB) {
        if (idx == 0) printf("%.f", x);
        else printf(",%.f", x);
        idx++;
    }

    return 0;
}