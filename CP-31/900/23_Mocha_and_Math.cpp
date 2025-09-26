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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        if (n == 1)
        {
            cout << v[0] << endl;
            continue;
        }

        cout << (v[0] & v[1]) << endl;
    }

    return 0;
}