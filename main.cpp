#include <iostream>

using namespace std;

int main() {
    int X;
    while(true)
    {
        cin >> X;
        if(X == 1999)
        {
            cout << "Correct";
            break;
        }
        cout << "Wrong\n";
    }
   return 0;
}
