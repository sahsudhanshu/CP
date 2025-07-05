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
        int possible = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i && arr[i - 1] != arr[i])
            {
                possible = 0;
            }
        }
        if (n == 2 || possible)
        {
            cout << "YES" << endl;
            continue;
        }

        int arrNew[4];
        arrNew[0] = arr[0];
        arrNew[1] = 1;
        arrNew[3] = 0;

        int check = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arrNew[0])
                arrNew[1]++;
            else if (arrNew[3] == 0)
            {
                arrNew[2] = arr[i];
                arrNew[3]++;
            }
            else if (arrNew[2] == arr[i])
                arrNew[3]++;
            else
            {
                cout << "NO" << endl;
                check = 0;
                break;
            }
        }

        if (!check)
        {
            continue;
        }

        if (n % 2 == 0)
        {
            if (arrNew[1] == arrNew[3])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (arrNew[1] + 1 == arrNew[3] || arrNew[1] == arrNew[3] + 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}