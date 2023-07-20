#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    string a;
    getline(cin, a);

    stringstream ss(a);
    vector<int> lst;

    while (getline(ss, a, ',')) {
        lst.push_back(stoi(a));
    }

    double t = 0;
    for (int x : lst)
        if (x < 20)
            t += x * 1.07;
        else
            t += x;

    printf("%.2lf ", t);

    return 0;
}