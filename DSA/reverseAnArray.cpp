#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;
    for (int i = 0; i < n / 2; i++)
    {
        // int temp = arr[i];
        // arr[i] = arr[n-i-1];
        // arr[n-i-1] = temp;
        swap(arr[i], arr[n - 1 - i]);
    }
    printArray(arr, n);

    // Swap Allertnate
    for (int i = 0; i < n-1; i=i+2)
    {
        swap(arr[i], arr[i + 1]);
    }
    printArray(arr, n);

    return 0;
}
