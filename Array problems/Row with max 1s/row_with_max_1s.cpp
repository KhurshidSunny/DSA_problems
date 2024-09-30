#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int arr[4][4] = {
    //     {0, 1, 1, 1},
    //     {0, 0, 1, 1},
    //     {1, 1, 1, 1},
    //     {0, 0, 0, 0}};

    int arr[2][2] = {
        {0, 0},
        {1, 1}

    };

    int row_size = sizeof(arr) / sizeof(arr[0]);
    int col_size = sizeof(arr[0]) / sizeof(arr[0][0]);

    int max_ones = 0;
    int row_index = -1;

    for (int i = 0; i < row_size; i++)
    {
        int count = 0;
        for (int j = 0; j < col_size; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count >= max_ones)
        {
            max_ones = count;
            row_index = i;
        }
    }

    cout << "max 1s: " << max_ones << endl;
    cout << "Row number : " << row_index << endl;
}
