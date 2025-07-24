#include <bits/stdc++.h>
using namespace std;

// bool gcd(int a, int b)
// {

//     if (a >= b)
//     {
//         for (int i = b; i >= 3; i--)
//             if (a % i == 0 && b % i == 0)
//                 return false;
//     }
//     else
//         for (int i = a; i >= 3; i--)
//             if (a % i == 0 && b % i == 0)
//                 return false;
//     return true;
// }

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

        int ans = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(arr[i], arr[j]) <= 2)
                {
                    ans = true;
                    break;
                }
            }
            if (ans)
                break;
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}