#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> v(n);
        cin >> v[0];
        for (int i = 1; i < n; i++)
        {
            ll a;
            cin >> a;
            v[i] = a + v[i - 1];
        }

        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            ll sum = 0;
            if (l != 1)
                sum += v[l - 2];
            if (r != n)
                sum += v[n-1] - v[ r - 1];
            sum += (r - l + 1) * k;
            if (sum % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}