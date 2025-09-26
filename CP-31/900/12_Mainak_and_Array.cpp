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

        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                maxi = max(maxi, v[i] - v[0]);
            else
                maxi = max(maxi, v[i] - v[i + 1]);
        }
        for (int i = 1; i < n; i++)
            maxi = max(maxi, v[i] - v[0]);

        for (int i = 0; i < n - 1; i++)
            maxi = max(maxi, v[n - 1] - v[i]);
        cout << maxi << endl;
    }
    return 0;
}