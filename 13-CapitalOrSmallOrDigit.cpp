#include <iostream>

using namespace std;

int main()
{
    char X = ' ';
    cin >> X;
    (int)X < 65 ? cout << "IS DIGIT\n" : (int)X < 97 ? cout << "ALPHA\nIS CAPITAL\n" : cout << "ALPHA\nIS SMALL\n";
    return 0;
}
