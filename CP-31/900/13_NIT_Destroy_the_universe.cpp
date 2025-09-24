#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        int start = -1;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                start = i;
                break;
            }
        }
        ll end = -1;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v[i] != 0)
            {
                end = i;
                break;
            }
        }
        if (start == -1 && end == -1)
        {
            cout << 0 << endl;
            continue;
        }
        bool zero = false;

        for (ll i = start; i <= end; i++)
        {
            if (v[i] == 0)
            {
                zero = true;
            }
        }
        if (zero)
        {
            cout << 2 << endl;
        }
        else
            cout << 1 << endl;
    }

    return 0;
}