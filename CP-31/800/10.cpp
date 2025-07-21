#include <vector>
#include <iostream>
#include <string>
using namespace std;

int countPoint(vector<string> v)
{
    int count = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (v[i - 1][j - 1] == 'X')
            {
                if (i == 1 || i == 10)
                    count += 1;
                else if (i == 2 || i == 9)
                {
                    if (j == 1 || j == 10)
                        count += 1;
                    else
                        count += 2;
                }
                else if (i == 3 || i == 8)
                {
                    if (j == 1 || j == 10)
                        count += 1;
                    else if (j == 2 || j == 9)
                        count += 2;
                    else
                        count += 3;
                }
                else if (i == 4 || i == 7)
                {
                    if (j == 1 || j == 10)
                        count += 1;
                    else if (j == 2 || j == 9)
                        count += 2;
                    else if (j == 3 || j == 8)
                        count += 3;
                    else
                        count += 4;
                }
                else
                {
                    if (j == 1 || j == 10)
                        count += 1;
                    else if (j == 2 || j == 9)
                        count += 2;
                    else if (j == 3 || j == 8)
                        count += 3;
                    else if (j == 4 || j == 7)
                        count += 4;
                    else
                        count += 5;
                }
            }
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<string> v(10);
        for (int i = 0; i < 10; i++)
            getline(cin, v[i]);
        cout << countPoint(v) << endl;
    }
    return 0;
}


// another solution is make a matrix of 10 x 10 and add the points and whenever the X is there direct go to the matrix