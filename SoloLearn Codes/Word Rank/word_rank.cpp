#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string word;
    cin >> word;
    long rank = 1;
    long spc = 1;
    map<char, int> chars;
    for (int i = word.length() - 1; i >= 0; i--) {
        char x = word[i];
        int xCount = chars.find(x) != chars.end() ? chars[x] + 1 : 1;
        chars[x] = xCount;
        map<char, int>::iterator it = chars.begin();
        while (it != chars.end()) {
            if (it->first < x) rank += spc * it->second / xCount;
            it++;
        }
        spc *= word.length() - i;
        spc /= xCount;
    }
    cout << rank;
    return 0;
}