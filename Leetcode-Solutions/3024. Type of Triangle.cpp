
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        *************       Created: 19.05.2025       *************

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
    string triangleType(vector<int> &nums)
    {
        if (nums[0] + nums[1] <= nums[2] ||
            nums[2] + nums[1] <= nums[0] ||
            nums[0] + nums[2] <= nums[1])
        {
            return "none";
        }
        else if (nums[0] == nums[1] && nums[1] == nums[2])
        {
            return "equilateral";
        }
        else if ((nums[0] == nums[1] && nums[1] != nums[2]) ||
                 (nums[1] == nums[2] && nums[1] != nums[0]) ||
                 (nums[0] == nums[2] && nums[1] != nums[0]))

        {
            return "isosceles";
        }
        // else if (nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[2])
        // else if (nums[0] + nums[1] > nums[2] &&
        //          nums[2] + nums[1] > nums[0] &&
        //          nums[0] + nums[2] > nums[1])
        // {
        // }
        else
        {
            return "scalene";
        }
    }
};

int32_t main()
{
    Solution sol;

    // Call the function

    cout << sol.triangleType(*(new vector<int>{8, 4, 4})) << endl;

    CRACKED;
}
