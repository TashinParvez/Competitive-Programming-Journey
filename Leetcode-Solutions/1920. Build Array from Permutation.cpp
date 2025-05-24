
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
    vector<int> buildArray(vector<int> &nums)
    {
        int len = nums.size();
        int cnt = 0;
        vector<int> ans;
        for (int i = 0; i < len; i++)
        {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};



int32_t main()
{
    Solution sol;

    // Call the function
    vector<int> result = sol.buildArray(*(new vector<int>{5,0,1,2,3,4}));

    // Print the result
    if (!result.empty())
    {
        for (int i = 0; i < result.size(); ++i)
        {
            cout << "Index " << i << ": " << result[i] << endl;
        }
    }
    else
        cout << "No solution found." << endl;

    //     cout << sol.Function_Name( *(new vector<int>{  2, 7, 11, 15   }),    9) << endl;

    CRACKED;
}
