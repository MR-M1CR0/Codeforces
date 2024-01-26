#include <iostream>

using namespace std;

int main()
{
    int X = 0;
    cin >> X;
    while(X > 9)
        X /= 10;
    X % 2 == 0 ? cout << "EVEN\n" : cout << "ODD\n";
    return 0;
}
