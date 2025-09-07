#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int checker(string s, int a, int n)
{

    int ans = 1;
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] <= s[i])
        {
            max++;
        }
        if ((i + 1) % a == 0)
        {
            max++;
            if (max != a)
            {
                ans = 0;
                break;
            }
            else
            {
                max = 0;
                i++;
                continue;
            }
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int a = n / k;
        if (n == 1 || a==1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == a)
        {
            int max = 0;
            int temp = 1;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] <= s[i + 1])
                {
                    temp++;
                }
                else
                {
                    if (temp > max)
                    {
                        max = temp;
                        temp = 1;
                    }
                }
            }
            cout << max << endl;
            continue;
        }

        for (int i = a; i > 0; i--)
        {

            if (i == 1)
            {
                cout << i << endl;
                break;
            }

            if (checker(s, i, n))
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}