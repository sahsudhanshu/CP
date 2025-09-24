#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

bool isIntPosi(ld n) { return (n == floor(n) && n > 0); }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ld m1 = (ld)(a + c) / (2 * b);
        ld m2 = (ld)(2 * b - c) / (a);
        ld m3 = (ld)(2 * b - a) / (c);
        if (isIntPosi(m1) || isIntPosi(m3) || isIntPosi(m2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}