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
        int two = 0;
        int index;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
                two++;
        }
        if (two % 2 != 0)
            cout << -1 << endl;
        else
        {
            int temp = 0;
            if (two == 0)
            {
                cout << 1 << endl;
                continue;
            }
            for (int i = 0; i < n; i++)
            {
                if (temp == two / 2)
                {
                    index = i;
                    break;
                }
                if (arr[i] == 2)
                    temp++;
            }
            cout << index << endl;
        }
    }
}