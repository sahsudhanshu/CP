#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = n - 1;

        for (int i = 0; i < n / 2; i++)
        {
            if ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))
            {
                l++;
                r--;
                continue;
            }
            break;
        }

        cout << r - l + 1 << endl;
    }

    return 0;
}