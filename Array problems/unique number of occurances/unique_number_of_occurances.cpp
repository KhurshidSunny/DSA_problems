#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 1, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> result(20, 0);
    for (int i = 0; i < size; i++)
    {
        result[arr[i]]++;
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}