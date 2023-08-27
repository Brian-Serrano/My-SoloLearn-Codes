#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[3501];
	fill(begin(arr), begin(arr) + 3501, 2000);
	string sb;
	int carry = 0, inp;
	for (size_t i = 3500; i > 0; i -= 14) {
		int sum = 0;
		for (size_t j = i; j > 0; j--) {
			sum = sum * j + 10000 * arr[j];
			arr[j] = sum % (j * 2 - 1);
			sum /= j * 2 - 1;
		}
		char buff[10];
		snprintf(buff, sizeof(buff), "%04d", carry + sum / 10000);
		sb += buff;
		carry = sum % 10000;
	}
	cin >> inp;
	cout << sb[inp];

	return 0;
}