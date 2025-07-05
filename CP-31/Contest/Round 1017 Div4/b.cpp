#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        if (l == 0)
            cout << 0 << ' ' << m << endl;
        else if (r == 0)
            cout << (-1) * m << ' ' << 0 << endl;
        else
        {
            if (m <= l * (-1))
            {
                cout << m * (-1) << ' ' << 0 << endl;
            }
            else
            {
                cout << l << ' ' << m - (l * (-1)) << endl;
            }
        }
    }

    return 0;
}