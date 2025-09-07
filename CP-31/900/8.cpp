#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = 0;
        int temp = 2;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                maxi = max(maxi, temp);
                temp = 2;
            }
            else
            {
                temp++;
            }
        }
        maxi = max(maxi, temp);
        cout << maxi << endl;
    }

    return 0;
}