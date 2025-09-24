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
        bool turn = true;
        int length = s.size();
        while (true)
        {
            length = s.size();
            for (int i = 1; i < s.size(); i++)
                if ((s[i] == '1' && s[i - 1] == '0') || (s[i] == '0' && s[i - 1] == '1'))
                {
                    s.erase(i - 1, 2);
                    turn = !turn;
                    break;
                }
            if (s.size() == length)
                break;
        }
        if (turn)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }

    return 0;
}