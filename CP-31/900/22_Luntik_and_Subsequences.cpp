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
        ll sum = 0;
        long long one = 0;
        long long zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] == 0)
                zero++;
            else if (v[i] == 1)
                one++;
        }
        long long count = pow(2, zero);
        cout << one * count << endl;
    }

    return 0;
}