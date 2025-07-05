#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int status = 1;
        if (k >= 2)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (v[i - 1] > v[i])
                {
                    cout << "NO" << endl;
                    status = 0;
                    break;
                }
            }
        }
        if (!status)
            continue;

        cout << "YES" << endl;
    }
}