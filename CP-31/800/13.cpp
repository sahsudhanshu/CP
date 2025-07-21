#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        int min = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (min > a[i])
                min = a[i];
        }

        vector<int> b;
        vector<int> c;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == min)
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }

        if (c.size() == 0)
            cout << -1 << endl;
        else
        {
            cout << b.size() << ' ' << c.size() << endl;
            for (int i = 0; i < b.size(); i++)
                cout << b[i] << " ";
            cout << endl;
            for (int i = 0; i < c.size(); i++)
                cout << c[i] << " ";
            cout << endl;
        }
    }
    return 0;
}