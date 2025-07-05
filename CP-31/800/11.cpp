#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int min;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (!i || abs(arr[i]) < min)
        {
            min = abs(arr[i]);
        }
    }
    cout << min << endl;

    return 0;
}