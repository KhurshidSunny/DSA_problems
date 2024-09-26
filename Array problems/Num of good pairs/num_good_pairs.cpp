#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cout << "Enter size of nums : ";
    cin >> size;

    int *nums = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums[i];
    }

    int count_good_pairs = 0;

    // Find good pairs
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] == nums[j] && i < j)
            {
                count_good_pairs++;
            }
        }
    }

    cout << count_good_pairs;
}