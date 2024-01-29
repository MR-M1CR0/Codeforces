#include <iostream>

using namespace std;

int main()
{
    int A = 0, B = 0;
    char S = ' ';
    string output = "";
    cin >> A >> S >> B;
    switch(S)
    {
    case '>':
        A > B ? output = "Right" : output = "Wrong";
        break;
    case '<':
        A < B ? output = "Right" : output = "Wrong";
        break;
    case '=':
        A == B ? output = "Right" : output = "Wrong";
        break;
    default:
        output = "Wrong Input!";
    }
    cout << output << endl;
    return 0;
}
