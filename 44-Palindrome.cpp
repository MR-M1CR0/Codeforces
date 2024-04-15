#include <iostream>

using namespace std;

int main() {
    long long Num = 0, R = 0;
    string result = "NO";
    cin >> Num;
    long long X = Num;
    while(X > 0){
        R = R * 10 + X % 10;
        X = X / 10;
    }
    if(R == Num)
        result = "YES";
    cout << R << endl;
    cout << result << endl;
   return 0;
}
