#include <iostream>
#include <math.h>
using namespace std;

long long number(int n, int x, int y, long long start)
{
    int r, c;
    r = (x > pow(2, n) / 2) ? 1 : 0;
    r = (y > pow(2, n) / 2) ? 1 : 0;

    n = n - 1;
    if (r == 0 && c == 0)
    {
        if (n = 1)
        {
            if (x % 2 != 0 && y % 2 != 0)
                return start;
            else if (x % 2 == 0 && y % 2 == 0)
                return start + 1;
            else if (x % 2 == 0 && y % 2 != 0)
                return start + 2;
            else if (x % 2 != 0 && y % 2 == 0)
                return start + 3;
        }
        else
        {

            if (r == 1 && c == 1)
                start = start - pow(2, n + 1);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n;
        cin >> q;
    }

    return 0;
}