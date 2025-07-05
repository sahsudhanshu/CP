#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int dot = 0;
        int threePair = 0;
        char str[n];
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '.')
            {
                dot++;
                threePair++;
            }
            else
                threePair = 0;
            if (threePair >= 3)
            {
                dot = 2;
                break;
            }
        }
        cout << dot << endl;
    }

    return 0;
}