#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n * k);
        for (ll i = 0; i < n * k; i++)
            cin >> v[i];
        ll median = 0;
        ll poll = n - ceil((float)n / 2) + 1;
        ll j = n * k - poll;
        for (ll i = 0; i < k; i++)
        {
            median += v[j];
            j -= poll;
        }
        cout << median << endl;
    }
    return 0;
}