
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        *************       Created: 24.05.2025       *************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl
#define int long long
#define setDec(x) fixed << setprecision(x)
#define tashin cout << "____Tashin____" << nl;
#define dbg(x) cerr << #x << " = " << (x) << endl;
using namespace std;

template <typename T>
int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

// here tashin
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int ans = 0;
        sort(nums.begin(), nums.end());

        int cnt = 1;
        if (nums.size() == 0)
            cnt = 0;

        for (int i = 1; i < nums.size(); i++)
        {

            if (nums[i - 1] == nums[i])
            {
                continue;
            }
            else if (nums[i - 1] + 1 == nums[i])
            {
                cnt++;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);

        return ans;
    }
};

int32_t main()
{
    Solution sol;

    cout << sol.longestConsecutive(*(new vector<int>{0, 3, 7, 2, 5, 8, 4, 6, 0, 1})) << endl;

    CRACKED;
}
