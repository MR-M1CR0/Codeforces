#include <iostream>

using namespace std;

int main() {
    short T, D;
    int N;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> N;
        if(N == 0)
            cout << 0 << endl;
        else
        {
            while(N > 0)
        {
                D = N % 10;
                cout << D << " ";
            N /= 10;
        }
            cout << endl;
        }
    }
   return 0;
}
