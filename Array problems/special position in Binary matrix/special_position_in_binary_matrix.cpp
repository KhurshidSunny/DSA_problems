#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int mat[3][3] = {
    //     {1, 0, 0},
    //     {0, 0, 1},
    //     {1, 0, 0}};
    int mat[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    int row_size = sizeof(mat) / sizeof(mat[0]);
    int col_size = sizeof(mat[0]) / sizeof(mat[0][0]);

    // row and col array to store all ones
    int row[row_size];
    int col[col_size];

    // initialize row and col with zero
    for (int i = 0; i < row_size; i++)
    {
        row[i] = 0;
    }
    for (int i = 0; i < col_size; i++)
    {
        col[i] = 0;
    }

    // count the number of 1s in each row and col
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            if (mat[i][j] == 1)
            {
                row[i]++;
                col[j]++;
            }
        }
    }

    // count the number of special position where there is 1 in both row and col
    int ans = 0;
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            if (mat[i][j] == 1 && row[i] == 1 && col[j] == 1)
            {
                ans++;
            }
        }
    }

    cout << "answer : " << ans << endl;
}