#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    string a;
    getline(cin, a);

    stringstream ss(a);
    vector<int> v;

    while (getline(ss, a, ' ')) {
        v.push_back(stoi(a));
    }

    for (int x : v) if (x % 2 == 0) cout << x << " ";

    return 0;
}