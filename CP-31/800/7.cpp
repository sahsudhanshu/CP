#include <iostream>
#include <string.h>
using namespace std;

bool check(string s, string x)
{
    if (s.size() > x.size())
        return false;
    for (int i = 0; i <= x.size() - s.size(); i++)
        if (x.substr(i, s.size()) == s)
            return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;

        string x1 = x + x;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;

        if (check(s, x))
            cout << "0" << endl;
        else if (check(s, x1))
            cout << "1" << endl;
        else if (check(s, x2))
            cout << "2" << endl;
        else if (check(s, x3))
            cout << "3" << endl;
        else if (check(s, x4))
            cout << "4" << endl;
        else if (check(s, x5))
            cout << "5" << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}