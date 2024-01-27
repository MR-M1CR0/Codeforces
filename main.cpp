#include <iostream>

using namespace std;

int main()
{
    double N;
    cin >> N;
    int num = N;
    N == num ? cout << "int " << num << endl : cout << "float " << num << " " << N - num << endl;
    return 0;
}
