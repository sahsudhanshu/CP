#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> m;
        int maxCount = 0;
        for (auto i : v)
        {
            m[i]++;
            maxCount = max(maxCount, m[i]);
        }
        int finalCount = n - maxCount;
        if (finalCount == 0)
        {
            cout << finalCount << endl;
            continue;
        }

        int count = n - maxCount;
        int no = maxCount;
        while (count > no)
        {
            count -= no;
            finalCount++;
            no *= 2;
        }
        finalCount++;
        cout << finalCount << endl;
    }

    return 0;
}