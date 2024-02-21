#include <iostream>

using namespace std;

int main() {
    int N;
    long long X, Max = 0;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> X;
        if(X >= Max)
            Max = X;
    }
    cout << Max;
   return 0;
}
