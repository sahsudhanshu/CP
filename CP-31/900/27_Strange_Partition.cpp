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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll max = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            max += ceil((double)v[i] / x);
            sum += v[i];
        }
        ll min = ceil((double)sum / x);
        cout << min << " " << max << endl;
    }

    return 0;
}