#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

bool isInt(ld n) { return (n == floor(n) && n != 0); }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        ld m1 = (ld)(a + c) / (2 * b);
        ld m2 = (ld)(2 * b - c) / (a);
        ld m3 = (ld)(2 * b - a) / (c);
        if (isInt(m1))
            cout << "YES" << endl;
        else if (isInt(m2))
            cout << "YES" << endl;
        else if (isInt(m3))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}