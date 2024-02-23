#include <iostream>

using namespace std;

int main() {
    int T, N;
    long long F = 1;
    cin >> T;
    while(T--)
    {
        cin >> N;
        while(N--)
            F *= (N+1);
        cout << F << endl;
        F = 1;
    }
   return 0;
}
