#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <numeric>
using namespace std;

int main() {

    string a, tmp;
    getline(cin, a);

    stringstream ss(a);
    vector<float> p;

    while (getline(ss, tmp, ',')) {
        p.push_back(stof(tmp));
    }

    sort(p.begin(), p.end());

    p.pop_back();

    float s = accumulate(p.begin(), p.end(), 0);
    cout << floor(s * 0.3 * 0.07 + s * 0.3);

    return 0;
}