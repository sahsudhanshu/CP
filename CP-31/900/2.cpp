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

        for (auto i : s)
            count.emplace(i, s[i]++);

        
        
    }

    return 0;
}