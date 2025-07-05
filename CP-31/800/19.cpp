#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int one = 0, minusOne = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                one++;
            else
                minusOne++;
        }

        if (one < minusOne)
        {
            int gap = abs(one - minusOne) / 2;
            int temp = (n % 2 == 0) ? gap : gap + 1;

            if ((temp - minusOne) % 2 == 0)
                cout << temp << endl;
            else
                cout << temp + 1 << endl;
        }
        else
        {
            if (minusOne % 2 == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }

    return 0;
}