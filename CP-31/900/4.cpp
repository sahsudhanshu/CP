#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll time = b;

        for (auto i : arr)
        {
            if (i + 1 > a)
                time += a - 1;
            else
                time += i;
        }

        cout << time << endl;
    }

    return 0;
}