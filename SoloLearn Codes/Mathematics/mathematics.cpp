#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double eval(string expression)
{

    system(("echo $((  " + expression + " )) > x.cpp").c_str());

    string v;
    ifstream readFile("x.cpp");
    getline(readFile, v);
    readFile.close();

    return (stod(v));
}

int main() {

    int n, i = 0;
    cin >> n;
    string r = "none", s;
    while (getline(cin, s, ' ')) {
        if (n == eval(s)) {
            r = "index " + to_string(i);
            break;
        }
        i++;
    }
    cout << r;

    return 0;
}