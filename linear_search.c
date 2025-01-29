#include <stdio.h>
int linearSearch(int arr[], int size, int key);
// int linearSearch(int arr[], int size, int key, int i);

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

    int index = linearSearch(arr, size, key);
    // int index = linearSearch(arr, size, key, 0);
    printf("%d", index);
    return 0;
}

int linearSearch(int arr[], int size, int key)
{
    int i = 0;
    while (i < size)
    {
        if (arr[i] == key)
        {
            return i;
        }
        i++;
    }
    return -1;
}

// int linearSearch(int arr[], int size, int key, int i)
// {

//     if (arr[i] != key && i < size)
//     {
//         return linearSearch(arr, size, key, i + 1);
//     }
//     else if (arr[i] == key)
//     {
//         return i;
//     }

//     return -1;
// }
