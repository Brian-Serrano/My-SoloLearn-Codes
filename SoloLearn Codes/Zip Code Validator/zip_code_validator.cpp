#include <iostream>
#include <string>

using namespace std;

int main() {
    string z;
    getline(cin, z);
    bool s = z.length() == 5;
    for (char x : z) if (isdigit(x) == 0 || isspace(x)) s = false;
    cout << ((s) ? "true" : "false");
    return 0;
}