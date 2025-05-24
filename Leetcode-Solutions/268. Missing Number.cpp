
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
        int len = nums.size();
        if (nums[len - 1] == len - 1)
            return len;

        for (int i = 0; i < len; i++)
        {
            if (nums[i] != i){
                return i;
            }
        }
    }
};

int32_t main()
{
    Solution sol;

    cout << sol.missingNumber(*(new vector<int>{9, 6, 4, 2, 3, 5, 7, 0, 1})) << endl;

    CRACKED;
}
