#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        int i = 1;
        while (n % (i + 1) == 0)
            i++;

        cout << i << endl;
    }

    return 0;
}