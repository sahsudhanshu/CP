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

        int parity = arr[0] % 2;
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            int temp = arr[i] % 2;
            if (temp == parity)
                count++;
            parity = temp;
        }
        cout << count << endl;
    }

    return 0;
}