#include <iostream>

using namespace std;

int main() {
    int X;
    string result = "YES";
    cin >> X;
    if(X <= 1)
        result = "NO";
    else
        for(int i = 2; i <= (X / 2); i++)
            if(X % i == 0)
                result = "NO";

    cout << result << endl;
   return 0;
}
