#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int max = arr[0];
        for (int i = 1; i < n; i++)
        {
            int temp = arr[i] - arr[i - 1];
            if (temp > max)
                max = temp;
        }
        int last = (x - arr[n - 1]) * 2;
        if (last > max)
            max = last;
        cout << max << endl;
    }

    return 0;
}