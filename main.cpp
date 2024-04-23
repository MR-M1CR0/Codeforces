#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    bool isFound = false;
    for(int i = A; i <= B; i++)
    {
        int num = i;
        bool isLucky = true;

        while (num > 0)
        {
            int digit = num % 10;
            if(digit != 4 && digit != 7)
            {
                isLucky = false;
                break;
            }
            num /= 10;
        }
        if(isLucky)
        {
            cout << i << " ";
            isFound = true;
        }
    }
    if(!isFound)
        cout << -1;
   return 0;
}
