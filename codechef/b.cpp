#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char str[n];
        for (int i = 0; i < n; i++)
            cin >> str[i];
        int boys = 0, girls = 0;
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            if (boys > 2 * girls)
            {
                cout << i << endl;
                k = 0;
                break;
            }
            if (str[i] == 'B')
                boys++;
            else
                girls++;
        }
        if (k)
        {
            cout << n << endl;
        }
    }
}
