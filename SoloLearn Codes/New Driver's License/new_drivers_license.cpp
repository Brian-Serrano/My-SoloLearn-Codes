#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
	string n, a, o;
	getline(cin, n);
	getline(cin, a);
	getline(cin, o);
	stringstream ss(o);
	int pos = 0;
	while (getline(ss, o, ' ')) {
		if (o.compare(n) < 0) pos++;
	}
	cout << 20 * (1 + pos / stoi(a));
	return 0;
}