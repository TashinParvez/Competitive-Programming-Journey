
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
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums.size() - 1 == nums[nums.size() - 1])
            return nums.size();
            
        int l = 0, r = nums.size() - 1;
        int mid = 0;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (nums[mid] != mid)
            {
                r = mid;
                if (l == r)
                    break;
            }
            else
            {
                l = mid + 1;
            }
        }

        return mid;
    }
};

int32_t main()
{
    Solution sol;

    cout << sol.missingNumber(*(new vector<int>{9, 6, 4, 2, 3, 5, 7, 0, 1})) << endl;

    CRACKED;
}
