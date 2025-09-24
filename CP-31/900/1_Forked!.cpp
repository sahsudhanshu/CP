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
        ll a, b;
        cin >> a >> b;
        ll kx, ky, qx, qy;
        cin >> kx >> ky;
        cin >> qx >> qy;

        set<pair<int, int>> s1;

        s1.insert({kx + a, ky + b});
        s1.insert({kx + a, ky - b});
        s1.insert({kx - a, ky + b});
        s1.insert({kx - a, ky - b});
        s1.insert({kx + b, ky + a});
        s1.insert({kx + b, ky - a});
        s1.insert({kx - b, ky + a});
        s1.insert({kx - b, ky - a});

        set<pair<int, int>> s2;
        s2.insert({qx + a, qy + b});
        s2.insert({qx + a, qy - b});
        s2.insert({qx - a, qy + b});
        s2.insert({qx - a, qy - b});
        s2.insert({qx + b, qy + a});
        s2.insert({qx + b, qy - a});
        s2.insert({qx - b, qy + a});
        s2.insert({qx - b, qy - a});
        int count = 0;
        for (auto x : s1)
            for (auto y : s2)
                if (x == y)
                    count++;

        cout << count << endl;
    }

    return 0;
}