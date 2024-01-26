#include <iostream>

using namespace std;

int main()
{
    long long A = 0, B = 0;
    char S = ' ';
    cin >> A >> S >> B;
    switch(S)
    {
    case '+':
        cout << A + B << endl;
        break;
    case '-':
        cout << A - B << endl;
        break;
    case '*':
        cout << A * B << endl;
        break;
    case '/':
        cout << A / B << endl;
        break;
    default:
        cout << "Wrong Input!\n";
    }
    return 0;
}
