#include <iostream>
using namespace std;

int main() {

	int d;
	cout << '#';
	for (int i = 0; i < 3; i++) {
		cin >> d;
		cout << hex << d << endl;
	}

	return 0;
}