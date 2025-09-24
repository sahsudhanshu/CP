#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

vector<string> val = {"00", "25", "50", "75"};

int operation(string s, string pVal)
{
    int checkIdx = pVal.size() - 1;
    int count = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == pVal[checkIdx])
        {
            checkIdx--;
            if (checkIdx < 0)
                break;
        }
        else
            count++;
    }
    if (checkIdx >= 0)
        count = INT_MAX;
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int min = INT_MAX;

        for (int i = 0; i < 4; i++)
        {
            int temp = operation(s, val[i]);
            if (min > temp)
                min = temp;
        }
        cout << min << endl;
    }

    return 0;
}