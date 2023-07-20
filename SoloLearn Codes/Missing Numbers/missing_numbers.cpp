#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int getIndex(vector<int> v, int K) {
    vector<int>::iterator it = find(v.begin(), v.end(), K);
    return ((it != v.end()) ? it - v.begin() : -1);
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

    int min = *min_element(lst.begin(), lst.end());
    int max = *max_element(lst.begin(), lst.end());

    for (int x = min; x < max; x++) {
        if (getIndex(lst, x) == -1) cout << x << " ";
    }

    return 0;
}