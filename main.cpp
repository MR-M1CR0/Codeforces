#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;

    double AB = B * log(A);
    double CD = D * log(C);

    if (AB > CD) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
