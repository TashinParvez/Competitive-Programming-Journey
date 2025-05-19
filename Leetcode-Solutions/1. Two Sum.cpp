
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
        map<int, int> search;
        int len = nums.size();

        for (int i = 0; i < len; i++)
        {
            if (search.find(target - nums[i]) == search.end())
            {
                search[nums[i]] = i;
            }
            else
            {
                return {search[target - nums[i]], i};
            }
        }
    }
};



int32_t main()
{

    Solution sol;
    vector<int> res = sol.twoSum(*(new vector<int>{2, 7, 11, 15}), 9);

    cout << "==========" << nl;
    cout << "Indices: " << res[0] << " , " << res[1] << nl;
}
