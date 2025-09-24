#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int l = 0;
        int r = n - 1;

        int req;
        bool ans = false;
        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j] == i)
                {
                    if (j == l)
                        l++;
                    else if (j == r)
                        r--;
                    else
                    {
                        req = j;
                        ans = true;
                    }
                    break;
                }
            }
            if (ans)
                break;
        }

        if (ans)
        {
            cout << "YES" << endl;
            cout << req << " " << req + 1 << " " << req + 2 << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}