#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {5, 4, 2, 3};
    vector<int> arr;

    // Sort the array
    sort(nums.begin(), nums.end());

    // swap the elements
    for (int i = 0; i < nums.size(); i += 2)
    {
        swap(nums[i], nums[i + 1]);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}