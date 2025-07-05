#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int check = 1;
        for (int i = 0; i < n; i++)
        {
            if (k == arr[i])
            {
                cout << "YES" << endl;
                check = 0;
                break;
            }
        }

        if (check)
            cout << "NO" << endl;
    }

    return 0;
}