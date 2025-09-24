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
        ll n;
        cin >> n;
        long double power = log2(n);
        ll d = floorl(power);

        if (pow(2, d) == n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}