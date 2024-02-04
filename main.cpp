#include <iostream>

using namespace std;

int main() {
    double n, k, a, result;
    cin >> n >> k >> a;
    result = n * k / a;
    long long myNumber = result;
    if(result == myNumber)
    {
        if(myNumber == int(result))
            cout << "int";
        else
            cout << "long long";
    }
    else
    {
        cout << "double";
    }
   return 0;
}
