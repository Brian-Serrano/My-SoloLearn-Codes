#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int fact(int n) {
    if (n <= 1) return 1;
    else return fact(n - 1) * n;
}

int findCommonFact(const string& a) {
    const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int result = 1;
    vector<int> common;
    for (char c : alphabet) {
        int count = std::count(a.begin(), a.end(), c);
        if (count > 1)
            common.push_back(count);
    }
    for (int integer : common) {
        result *= fact(integer);
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);

    vector<string> arr;
    for (char c : input) {
        string s(1, c);
        arr.push_back(s);
    }

    vector<string> sorted = arr;
    sort(sorted.begin(), sorted.end());

    int sum = 0;
    vector<int> fac(arr.size());
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < sorted.size(); j++) {
            if (arr[i] == sorted[j]) {
                fac[i] = j;
                sorted.erase(sorted.begin() + j);
                break;
            }
        }
        sum += fac[i] * fact(arr.size() - 1 - i) / findCommonFact(input.substr(i));
    }
    cout << ++sum << endl;
    return 0;
}