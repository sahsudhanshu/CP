#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, x, k;
        cin >> x >> k;

        for (int i = x; i > 0; i--)
            if (i % k != 0)
            {
                a = i;
                break;
            }

        if (a == x)
        {
            cout << 1 << endl;
            cout << x << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << a << " " << x - a << endl;
        }
    }
    return 0;
}
