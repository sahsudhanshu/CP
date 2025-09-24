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
        ll three = 0;
        while (n % 3 == 0)
        {
            three++;
            n /= 3;
        }
        ll two = 0;
        while (n % 2 == 0)
        {
            two++;
            n /= 2;
        }

        if (n > 1 || three < two)
            cout << -1 << endl;
        else
            cout << 2*three - two << endl;
    }

    return 0;
}