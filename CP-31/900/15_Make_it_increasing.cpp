#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define vin(v)

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
        int count = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] >= v[i + 1])
            {
                count++;
                v[i] = v[i] / 2;
                i++;
            }
            if (i != 0 && v[i] == 0)
            {
                count = -1;
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}