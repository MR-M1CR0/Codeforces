#include <iostream>

using namespace std;

int main()
{
    long long A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    switch(S)
    {
    case '+':
        A + B == C ? cout << "Yes\n": cout << A + B << endl;
        break;
    case '-':
        A - B == C ? cout << "Yes\n": cout << A - B << endl;
        break;
    case '*':
        A * B == C ? cout << "Yes\n": cout << A * B << endl;
        break;
    }
    return 0;
}
