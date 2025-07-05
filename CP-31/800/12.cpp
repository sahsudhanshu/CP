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
        int original[n * 2];
        cin >> arr[0];
        int m = 0;
        original[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= original[m])
            {
                m++;
                original[m] = arr[i];
            }
            else
            {
                m++;
                original[m] = arr[i];
                m++;
                original[m] = arr[i];
            }
        }
        cout << m + 1 << endl;

        for (int i = 0; i < m + 1; i++)
        {
            cout << original[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}