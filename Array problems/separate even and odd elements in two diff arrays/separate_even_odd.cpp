#include <bits/stdc++.h>

using namespace std;

int main() {
    int main_arr[] = {3, 10, 7, 12, 22, 19};
    int size = sizeof(main_arr)/sizeof(main_arr[0]);
    int even_arr[size];
    int odd_arr[size];

    int j = 0, k = 0;

    for(int i = 0; i < size; i++) {
        if(main_arr[i] % 2 == 0) {
            even_arr[j] = main_arr[i];
            j++;
        }else {
            odd_arr[k] = main_arr[i];
            k++;
        }
    }

    for(int i = 0; i < j; i++) {
        cout<<even_arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < k; i++) {
        cout<<odd_arr[i]<<" ";
    }

    
}