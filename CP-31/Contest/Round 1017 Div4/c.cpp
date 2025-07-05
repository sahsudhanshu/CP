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
        int arr[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];

        int p[2 * n];
        int temp[2 * n];
        int i = 1, j = 1;
        while (j <= n)
        {
            p[i + j - 1] = arr[i - 1][j - 1];
            temp[arr[i - 1][j - 1] - 1] = 1;
            j++;
        }
        j = n;
        i++;
        while (i <= n)
        {
            p[i + j - 1] = arr[i - 1][j - 1];
            temp[arr[i - 1][j - 1] - 1] = 1;
            i++;
        }
        int first = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (temp[i] != 1)
            {
                first = i + 1;
                break;
            }
        }
        cout << first << ' ';
        for (int i = 1; i < 2 * n; i++)
        {
            cout << p[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}