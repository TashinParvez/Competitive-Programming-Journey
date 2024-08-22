/**
 *        Author :  Tashin.Parvez
 *    United International University
 *          Created: 21.08.2024
 **/

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

// #define Read(x)          freopen(x, "r", stdin)
// #define Write(x)         freopen(x, "w", stdout)
#define CRACKED return 0;
#define nl "\n"
using namespace std;

/*******************/

class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int limit = *max_element(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());

        const int idx = 1e7;
        int divisorsSum[idx + 2];
        int divisorscnt[idx + 2];

        for (int i = 0; i <= limit; i++)
        {
            divisorsSum[i] = 0;
            divisorscnt[i] = 0;
        }

        for (int i = 1; i <= limit; i++)
        {
            for (int j = i; j <= limit; j += i)
            {
                divisorsSum[j] += i;
                divisorscnt[j]++;
            }
        }

        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (divisorscnt[nums[i]] == 4)
            {
                ans += divisorsSum[nums[i]];
            }
        }

        return ans;
    }
};
