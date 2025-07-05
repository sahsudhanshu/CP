#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int arr[100];
        int m = str.size();
        for (int i = 0; i < m; i++)
            arr[i] = str[i] - '0';

        int remove = 0;
        if (arr[m - 1] != 0)
        {
            for (int i = 0; i < m - 1; i++)
            {
                if (arr[i] != 0)
                    remove++;
            }
        }
        else
        {
            int end = 0;
            for (int i = m - 1; i >= 0; i--)
            {
                if (arr[i] != 0)
                {
                    remove += m - i - 1;
                    end = i;
                    break;
                }
            }
            for (int i = 0; i < end; i++)
            {
                if (arr[i] != 0)
                    remove++;
            }
        }
        cout << remove << endl;
    }

    return 0;
}