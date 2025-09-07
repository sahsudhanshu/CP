#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        ll max = (k * (2 * n - k + 1)) / 2;
        ll min = (k * (k + 1)) / 2;

        if (x > max || x < min)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}