#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end(), greater<int>());

        if (arr[0] == arr[1])
        {
            for (int i = 2; i < n; i++)
            {
                if (arr[i] != arr[1])
                {
                    swap(arr[i], arr[1]);
                    break;
                }
            }
            if (arr[0] != arr[1])
            {
                cout << "YES" << endl;
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }

    return 0;
}