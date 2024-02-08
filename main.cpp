#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    if(N % 10 == 0 || N / 10 == 0)
        cout << "YES";
    else
        ((N / 10) % (N % 10)) == 0 || ((N % 10) % (N / 10)) == 0 ? cout << "YES" : cout << "NO";

   return 0;
}
