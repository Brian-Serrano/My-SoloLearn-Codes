#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    string itms, tmp;
    getline(cin, itms);

    stringstream ss(itms);
    vector<float> p;

    while (getline(ss, tmp, ' ')) {
        p.push_back(stof(tmp));
    }

    int c = 0;
    for (double x : p) if (x * 1.1 > 20) c++;

    cout << ((c > 0) ? "Back to the store" : "On to the terminal");
    return 0;
}