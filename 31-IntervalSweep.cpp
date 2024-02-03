#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if(((a + b) % 2 == 0 && a == b &&  a > 0)||(a + b) % 2 != 0 && (a == (b+1) || b == (a+1)))
        cout << "YES";
    else
        cout << "NO";

   return 0;
}
