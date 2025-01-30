#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    // Method 1: builtin function __builtin_popcount
    cout << "No. of Setbit: " << __builtin_popcount(n) << endl;

    // Method 2: Using Bitwise Operators
    int count = 0;

    while (n)
    {
        count += n&1;
        n >>= 1;
        
    }
    cout << "No. of Setbit: " << count << endl;

    //Method 3 : Brian Kernighan’s Algorithm
    int count1 = 0;
    while (m) {
        m &= (m - 1);
        count1++;
    }
    cout << "No. of Setbit: " << count1 << endl;


    

    return 0;
}