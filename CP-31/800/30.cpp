#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 1;
        int digit = 1;
        while (true)
        {
            if (n / i <= 9)
                break;
            i *= 10;
            digit++;
        }

        int ans = ((digit - 1) * 9) + (n / i);
        cout << ans << endl;
    }

    return 0;
}