#include <iostream>

using namespace std;

int main()
{
    long long A, B, C, D, start, end;
    cin >> A >> B >> C >> D;

    if(C > B || D < A)
    {
        cout << -1 << endl;
    }
    else
    {
        if(C >= A && D >= B)
        {
            start = C;
            end = B;
        }
        else if (C <= A && D <= B)
        {
            start = A;
            end = D;
        }
        else if (C >= A && D <= B)
        {
            start = C;
            end = D;
        }
        else
        {
            start = A;
            end = B;
        }
        cout << start << " " << end << endl;
    }
    return 0;
}
