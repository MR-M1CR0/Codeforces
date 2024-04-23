#include <iostream>

using namespace std;

int main() {
    char S;
    cin >> S;
    int N, T;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> T;
        for(int j = 0; j < T; j++)
            cout << S;
        cout << endl;
    }

   return 0;
}
