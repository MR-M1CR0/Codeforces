#include <iostream>

using namespace std;

int main() {
    char C;
    cin >> C;
    C != 122 ? cout << char (C + 1) : cout << char(C - 25);
    return 0;
}
