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
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int max = 0, interval = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                interval++;
            if (max < interval)
            {
                max = interval;
            }
            if (arr[i] != 0)
                interval = 0;
        }

        cout << max << endl;
    }

    return 0;
}