#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {2, 4, 8, 6, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i< size; i++) {
        for(int j = i; j < size; j++) {
            for(int k = i; k < j; k++) {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}