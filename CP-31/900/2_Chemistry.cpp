#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> count;
        for (char c : s)
            count[c]++;

        int odd = 0;
        int even = 0;

        for (auto p : count)
        {
            if (p.second % 2 == 0)
                even++;
            else
                odd++;
        }

        if ((n - k) % 2 == 0)
        {
            if ((k - odd) % 2 == 0 && odd <= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if ((k - odd + 1) % 2 == 0 && odd - 1 <= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}