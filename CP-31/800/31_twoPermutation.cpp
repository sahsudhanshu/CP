#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (a + b + 2 <= n || n == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}