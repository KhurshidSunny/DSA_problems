#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {17, 18, 5, 4, 6, 1};
    // int arr[] = {400};
    vector<int> result;
    int size = sizeof(arr) / sizeof(arr[0]);

    // SOLVED WITH TWO LOOPS (NOT OPTIMIZED)

    // for (int i = 0; i < size - 1; i++)
    // {
    //     int greatest = INT_MIN;
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (arr[j] > greatest)
    //         {
    //             greatest = arr[j];
    //         }
    //     }
    //     result.push_back(greatest);
    // }
    // result.push_back(-1);

    // SOLVED WITH ONE LOOP (OPTIMIZED)

    int max = INT_MIN;
    result.push_back(-1);

    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i + 1] > max)
        {
            max = arr[i + 1];
        }
        result.push_back(max);
    }

    reverse(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}