#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int arr[] = {-1, 1, 2, 3, 1};
    int arr[] = {-6, 2, 5, -2, -7, -1, 3};
    int siz = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    int target = -2;

    for (int i = 0; i < siz - 1; i++)
    {
        for (int j = i + 1; j < siz; j++)
        {
            if (i < j && arr[i] + arr[j] < target)
            {
                count++;
            }
        }
    }
    cout << "pairs are : " << count << endl;
}