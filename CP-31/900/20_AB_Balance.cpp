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
        string s;
        cin >> s;
        if (s[0] == s[s.size() - 1])
        {
            cout << s << endl;
        }
        else
        {
            s[s.size() - 1] = s[0];
            cout << s << endl;
        }
    }

    return 0;
}