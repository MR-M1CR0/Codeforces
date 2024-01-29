#include <iostream>

using namespace std;

int main()
{
    long long A = 0, B = 0, C = 0, Max = 0, Min = 0;
    cin >> A >> B >> C;
    if(A >= B && A >= C)
    {
        Max = A;
        Min = B <= C ? B : C;
    }else if (B >= A && B >= C)
    {
        Max = B;
        Min = A <= C ? A : C;
    }
    else
    {
        Max = C;
        Min = A <= B ? A : B;
    }
    cout << Min << " " << Max << endl;
    return 0;
}
