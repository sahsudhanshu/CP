#include <bits/stdc++.h>
typedef long long ll;
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
        {
            cin >> v[i];
            if (v[i] == 1)
                v[i]++;
        }

        for (int i = 1; i < n; i++)
            if (v[i] % v[i - 1] == 0)
                v[i]++;

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}