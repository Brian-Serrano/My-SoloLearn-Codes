#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

bool isSub(string substring, vector<string> lst) {
    int c = 0;
    for (string w : lst) {
        if (w.find(substring) == string::npos) return false;
    }
    return true;
}

int main() {
    string w;
    getline(cin, w);

    vector<string> v;
    stringstream ss(w);

    while (getline(ss, w, ' ')) {
        v.push_back(w);
    }

    string lon_com_sub = "";

    for (size_t i = 0; i < v[0].length(); i++) {
        for (size_t j = i + 1; j < v[0].length() + 1; j++) {
            if(isSub(v[0].substr(i, j - i), v)) if (v[0].substr(i, j - i).length() > lon_com_sub.length()) lon_com_sub = v[0].substr(i, j - i);
        }
    }

    cout << lon_com_sub;

    return 0;
}