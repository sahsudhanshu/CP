#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        int t[n];
        for (int i = 0; i < n; i++)
            cin >> t[i];

        int min = 20;

        for (int i = 0; i < n; i++)
            if (min > t[i])
                min = t[i];

        if (n - k > d)
        {
            cout << n - k - d << endl;
        }
        else if (n - k == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << d - d % min << endl;
        }
    }

    return 0;
}