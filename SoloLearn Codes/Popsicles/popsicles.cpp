#include <iostream>
using namespace std;

int main() {
    int siblings, popsicles;
    cin >> siblings >> popsicles;
    cout << ((popsicles % siblings == 0) ? "give away" : "eat them yourself");
    return 0;
}