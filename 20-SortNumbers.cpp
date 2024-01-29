#include <iostream>

using namespace std;

int main()
{
    long long A, B, C, Min, Max, Mid;
    cin >> A >> B >> C;
    if(A >= B && A >= C)
    {
        Max = A;
        if (B <= C)
        {
            Min = B;
            Mid = C;
        }
        else
        {
            Min = C;
            Mid = B;
        }
    }
    else if(B >= A && B >= C)
    {
        Max = B;
        if (A <= C)
        {
            Min = A;
            Mid = C;
        }
        else
        {
            Min = C;
            Mid = A;
        }
    }
    else
    {
        Max = C;
        if (A <= B)
        {
            Min = A;
            Mid = B;
        }
        else
        {
            Min = B;
            Mid = A;
        }
    }
    cout << Min << endl << Mid << endl << Max << endl;
    cout << endl << A << endl << B << endl << C << endl;
    return 0;
}
