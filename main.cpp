#include <iostream>

using namespace std;

int main()
{
    string F1 = "", S1 = "", F2 = "", S2 = "", result = "NOT";
    cin >> F1 >> S1;
    cin >> F2 >> S2;
    if(S1.length() == S2.length())
    {
        for(int i = 0; i < S1.length(); i++)
        {
            if(S1[i] != S2[i])
            {
                result = "NOT";
                break;
            }
            result = "ARE Brothers";
        }
    }
    cout << result << endl;
    return 0;
}
