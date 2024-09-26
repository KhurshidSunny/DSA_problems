#include <bits/stdc++.h>

using namespace std;

int main() {
    // int hours[] = {0, 1, 2, 3, 4};
    int hours[] = {5,1,4,2,2};
    int target = 0;
    int n = sizeof(hours)/sizeof(hours[0]);

    // if(target == 0){
    //     cout<<0<<endl;
    //     return;
    // }
    
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(hours[i] >= target)
            count++;
    }
    cout<<count<<endl;
}