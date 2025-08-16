
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

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

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                return {i, mp[target - nums[i]]};
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};



int32_t main()
{

    Solution sol;
    vector<int> res = sol.twoSum(*(new vector<int>{2, 7, 11, 15}), 9);

    cout << "==========" << nl;
    cout << "Indices: " << res[0] << " , " << res[1] << nl;
}
