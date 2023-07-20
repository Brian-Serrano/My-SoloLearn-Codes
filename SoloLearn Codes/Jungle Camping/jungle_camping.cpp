#include <iostream>
#include <sstream>
using namespace std;

void animal(string n, string sp = " ")
{
    if (n == "Grr") cout << "Lion" << sp;
    else if (n == "Rawr") cout << "Tiger" << sp;
    else if (n == "Ssss") cout << "Snake" << sp;
    else if (n == "Chirp") cout << "Bird" << sp;
}

int main() {
    string delimiter = " ";
    string ns;
    getline(cin, ns);
    size_t pos = 0;
    while ((pos = ns.find(delimiter)) != string::npos) {
        animal(ns.substr(0, pos), delimiter);
        ns.erase(0, pos + delimiter.length());
    }
    animal(ns);
    return 0;
}