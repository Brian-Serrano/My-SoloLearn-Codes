#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    stringstream ss(a);
    double t = 0;
    while (getline(ss, a, ',')) {
        int x = stoi(a);
        t += (x < 20) ? x * 1.07 : x;
    }
    printf("%.2lf ", t);
    return 0;
}