#include <bits/stdc++.h>

using namespace std;

int main() {
    // int arr[] = {10, 20, 30, 40, 50};
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    // int fistIndex = 0;
    // int lastIndex = size-1;

    for(int i = 0; i < size/2; i++) {
        int fistIndex = i;
        int lastIndex = size-i-1;
        
        int temp_val = arr[fistIndex];
        arr[fistIndex] = arr[lastIndex];
        arr[lastIndex] = temp_val;

  
    }

    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}