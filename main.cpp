#include <iostream>

using namespace std;

int main() {
    long long n, m, k, counter = 0;
    cin >> n >> m >> k;

    if(n == 0 || k == 0)
        cout << counter;
    else
    {
        counter = min(min(n,m),k);
        n -= counter;
        m -= counter;
        k -= counter;

        counter += min(n / 2, k);
        cout << counter;
    }

   return 0;
}

