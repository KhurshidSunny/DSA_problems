#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int nums[] = {1, 2, 2, 3, 1, 4};
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    vector<int> frequency(101, 0);
    int max_freq = 0;
    int ans = 0;

    for (auto x : nums)
    {
        frequency[x]++;
        max_freq = max(max_freq, frequency[x]);
    }

    for (int i = 0; i <= 100; i++)
    {
        if (frequency[i] == max_freq)
        {
            ans++;
        }
    }
    ans *= max_freq;
    cout << ans << endl;
}