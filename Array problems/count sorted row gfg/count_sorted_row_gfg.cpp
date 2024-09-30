#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {6, 5, 4},
        {7, 8, 9}};

    int row_size = sizeof(arr) / sizeof(arr[0]);
    int col_size = sizeof(arr[0]) / sizeof(arr[0][0]);

    int ans = 0;

    for (int i = 0; i < row_size; i++)
    {
        int row_inc = 0;
        int row_dec = 0;
        for (int j = 1; j < col_size; j++)
        {
            if (arr[i][j] > arr[i][j - 1])
            {
                row_inc++;
            }
            else if (arr[i][j] < arr[i][j - 1])
            {
                row_dec++;
            }
        }

        if (row_inc == col_size - 1 || row_dec == col_size - 1)
        {
            ans++;
        }
    }

    cout << endl;
    cout << "count : " << ans << endl;
}