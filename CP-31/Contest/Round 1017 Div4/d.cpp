#include <iostream>
#include <string>
using namespace std;

int finder(char c, string str, int start)
{
    int count = 0;
    while (start < str.length())
    {
        if (str[start] != c)
            break;

        count++;
        start++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;

        int pLength = 0, sLength = 0;
        int ans = 1;

        while (pLength < p.length() && sLength < s.length())
        {
            if (p[pLength] != s[sLength])
            {
                ans = 0;
                break;
            }

            char temp = p[pLength];

            int pLen = finder(temp, p, pLength);
            int sLen = finder(temp, s, sLength);

            if (pLen > sLen || pLen * 2 < sLen)
            {
                ans = 0;
                break;
            }

            pLength += pLen;
            sLength += sLen;
        }

        if (pLength != p.length() || sLength != s.length())
            ans = 0;

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
