#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int maxi = 0;
        int temp = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] - v[i] <= k)
                temp++;
            else
            {
                maxi = max(maxi, temp);
                temp = 0;
            }
        }
        maxi = max(maxi, temp);
        temp = 0;

        cout << n - maxi - 1 << endl;
    }

    return 0;
}