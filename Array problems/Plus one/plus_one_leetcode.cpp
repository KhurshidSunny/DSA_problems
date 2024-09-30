#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int digits[] = {1, 2, 3};
    vector<int> digits = {9, 9, 9};
    int size = digits.size();

    for (int i = size - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            break;
        }
        else
        {
            digits[i] = 0;
        }
    }

    // 999 = 999+1 = 1000
    digits.push_back(0);
    digits[0] = 1;

    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i] << " ";
    }
}