#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string s = "123";
    int n = stoi(s);

    string s2 = "129.75";
    double d = stod(s2);

    cout << n + 1 << endl;
    cout << d + 1 << endl;
}
