#include <iostream>

using namespace std;

int main()
{
    char X = ' ';
    cin >> X;
    X < 97 ? cout << char(X + 32) << endl : cout << char(X - 32) << endl;
    return 0;
}
