#include <iostream>
#include <cmath>
using namespace std;

int t[10000];

int q(int n) {
	if (n > 2) {
		if (t[n] == 0) t[n] = q(n - q(n - 1)) + q(n - q(n - 2));
		return t[n];
	}
	else return 1;
}

int main() {
	int x;
	cin >> x;
	cout << q(x);
	return 0;
}