#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        if (x == 1 && k == 2)
        {
            cout << "YES" << endl;
        }
        else if (k > 1)
            cout << "NO" << endl;
        else if (x == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int flag = 1;
            for (int i = 2; i*i <= x; i++)
            {
                if (x % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (!flag)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}