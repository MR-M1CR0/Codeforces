#include <iostream>

using namespace std;

int main() {
    int N, even = 0, odd = 0, positive = 0, negative = 0;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        temp % 2 == 0 ? even++ : odd++;
        if(temp > 0)
            positive++;
        else if(temp < 0)
            negative++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
   return 0;
}
