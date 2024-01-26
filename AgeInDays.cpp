#include <iostream>

using namespace std;

int main()
{
    long long N = 0;
    cin >> N;
    int years = N / 365;
    N -= years * 365;
    int months = N / 30;
    N -= months * 30;
    int days = N;
    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";
    return 0;
}
