#include <iostream>

using namespace std;

int main()
{
    double A = 0, B = 0;
    int round = 0, temp = 0;
    cin >> A >> B;
    int floor = A / B;
    int ceil = A != B ? floor + 1 : floor;
    temp = (A / B) * 10;
    if(temp % 10 < 5)
        round = floor;
    else
        round = ceil;
    cout << "floor " << A << " / " << B << " = " << floor << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil << endl;
    cout << "round " << A << " / " << B << " = " << round << endl;
    return 0;
}
