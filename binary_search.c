#include <stdio.h>

int binary_search(int arr[], int left, int right, int key);

int main()
{
    int size;
    printf("Enter Size of the array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key to search : ");
    scanf("%d", &key);

    int index = binary_search(arr, 0, size - 1, key);
    printf("%d", index);
    return 0;
}

int binary_search(int arr[], int left, int right, int key)
{   
    int mid = ((left + right) / 2);

    if (arr[mid] == key)
    {
        return mid;
    }
    else if (left == right)
    {
        return -1;
    }
    else if (arr[mid] > key)
    {
        return binary_search(arr, left, mid-1, key);
    }
    else if (arr[mid] < key)
    {
        return binary_search(arr, mid+1, right, key);
    }
}