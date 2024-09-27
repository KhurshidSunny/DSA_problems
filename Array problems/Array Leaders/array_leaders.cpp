#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int arr[] = {16, 17, 4, 3, 5, 2};
    // int arr[] = {10, 4, 2, 4, 1};
    // int arr[] = {10, 4, 2, 4, 1};
    // int arr[] = {5, 10, 20, 40};

    /*
    // THIS IS WITH NESTED LOOP (O(N2));

    int arr[] = {30, 10, 10, 5};
    vector<int> leader_arr;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int reachedEnd = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] >= arr[j])
            {
                reachedEnd = j;
            }
            else
            {
                break;
            }
        }
        if (reachedEnd == n - 1)
        {
            leader_arr.push_back(arr[i]);
        }
    }
    leader_arr.push_back(arr[n - 1]);

    for (int i = 0; i < leader_arr.size(); i++)
    {
        cout << leader_arr[i] << " ";
    }

 */

    int arr[] = {5, 10, 20, 40};
}