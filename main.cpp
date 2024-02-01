#include <iostream>

using namespace std;

int main() {
    double X, P, result;
    cin >> X >> P;
    result = P / (1 - X / 100);
    cout << result<< endl;
    return 0;
}
