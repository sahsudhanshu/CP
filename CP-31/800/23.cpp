#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > d)
            cout << -1 << endl;
        else
        {
            int t = d - b;
            count += t;
            if (a + t < c)
                cout << -1 << endl;
            else
            {
                count += abs(c - a - t);
                cout << count << endl;
            }
        }
    }
}