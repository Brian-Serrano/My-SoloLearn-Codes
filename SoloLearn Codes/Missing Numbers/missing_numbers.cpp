#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool exst(vector<int> v, int K) {
    for (int i : v) if (K == i) return false;
    return true;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> lst;
    for (int i = 0; i < n; i++) {
        cin >> x;
        lst.push_back(x);
    }
    sort(lst.begin(), lst.end());

    for (int x = lst[0]; x < lst[n - 1]; x++) {
        if (exst(lst, x)) cout << x << " ";
    }

    return 0;
}