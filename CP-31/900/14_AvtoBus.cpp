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
        unsigned long long n;
        cin >> n;
        if (n % 2 != 0 || n < 4)
        {
            cout << -1 << endl;
            continue;
        }
        unsigned long long m = n / 2;

        unsigned long long maxi = 0;
        if (m % 2 == 0)
            maxi = m / 2;
        else
            maxi = m / 2;

        unsigned long long mini = 0;
        if (m % 3 == 0)
            mini = m / 3;
        else if (m % 3 == 1)
            mini = (m - 4) / 3 + 2;
        else
            mini = (m - 2) / 3 + 1;
        cout << mini << " " << maxi << endl;
    }

    return 0;
}