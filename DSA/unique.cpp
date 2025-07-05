#include <iostream>
#include <vector>
using namespace std;

// Only works when all elements are repeated twice except one
// int findUnique(int *arr, int size)
// {
//     int unique = *(arr);
//     for (int i = 1; i < size; i++)
//     {
//         unique = unique ^ *(arr + i); // using XOR
//     }
//     return unique;
// }

// Only works when elements from 1 to n-1 are present at least once and one element is repeated
// int findUnique(vector<int> &arr){
//     int sum = 0;
//     int n = arr.size();
//     for(int i = 0; i < n; i++){
//         sum = sum + arr[i];
//     }
//     int singleSum = n * (n - 1 ) / 2;
//     return sum - singleSum;
// }

// another way
int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    // XOR ing all array elements
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR [1, n-1]
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int arr[] = {2, 4, 6, 3, 4, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Unique Element: " << findUnique(arr) << endl;

    return 0;
}
