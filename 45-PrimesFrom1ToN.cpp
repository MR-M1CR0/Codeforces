#include <iostream>

using namespace std;

int main() {
    int Num = 0;
    cin >> Num;

    for(int i = 2; i <= Num; i++)
    {
        bool prime = true;
        for(int j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if(prime)
            cout << i << " ";
    }
   return 0;
}
