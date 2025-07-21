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
        cin >> arr[0];
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < arr[i - 1])
                ans = 1;
        }
        if (ans)
        {
            cout << 0 << endl;
            continue;
        }
        int min = INT32_MAX;
        for (int i = 1; i < n; i++)
        {
            int newMin = ((arr[i] - arr[i - 1]) / 2) + 1;
            if (newMin < min)
                min = newMin;
        }
        cout << min << endl;
    }

    return 0;
}