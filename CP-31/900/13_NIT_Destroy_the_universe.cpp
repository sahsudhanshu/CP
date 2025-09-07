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
            cin >> v[i];
        int start = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                start = i;
                break;
            }
        }
        int end = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] != 0)
            {
                end = i;
                break;
            }
        }
        if (start == end && v[start] == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int count = 0;
        for (int i = start; i <= end; i++)
        {
            if (v[i] == 0 && v[i - 1] != 0)
                count++;
            if (v[i] != 0 && i == end)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}