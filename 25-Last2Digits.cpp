#include <iostream>

using namespace std;

int main()
{
    long long A, B, C, D, answer;
    cin >> A >> B >> C >> D;
    answer = ((A % 100) * (B % 100) * (C % 100) * (D % 100))%100;
    answer <= 9 ? cout << 0 << answer << endl : cout << answer << endl;
    return 0;
}
