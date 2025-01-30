#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i]) return true;
        
    }
    return false;
}

int main(){
    // Linear Search

    int arr[10] = {1,2,6,4,9,6,3,2,1,15};

    cout << search(arr,10,9);

    return 0;
}