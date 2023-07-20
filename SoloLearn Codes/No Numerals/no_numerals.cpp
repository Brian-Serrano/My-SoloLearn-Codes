#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>    
using namespace std;

int main() {
    string arr[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
    vector<string> ws;
    string w, s;
    getline(cin, s);
    istringstream iss(s);
    while (iss >> w) {
        if (isdigit(w[0]))
            ws.push_back(arr[stoi(w)]);
        else
            ws.push_back(w);
    }
    ostringstream ostream;
    copy(ws.begin(), ws.end(), ostream_iterator<string>(ostream, " "));
    cout << ostream.str();
    return 0;
}