#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    string str;
    cin >> str;
    str = string(str.rbegin(), str.rend());
    vector<int> lst;
    for (int i = 0; i < str.length(); i++) lst.push_back(str[i] - 48);

    int r = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 != 0) {
            r += lst[i] * 2;
            if (lst[i] * 2 > 9) r -= 9;
        }
        else r += lst[i];
    }

    cout << ((lst.size() == 16 && r % 10 == 0) ? "valid" : "not valid");

    return 0;
}