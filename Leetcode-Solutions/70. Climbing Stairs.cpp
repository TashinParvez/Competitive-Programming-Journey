
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        *************       Created: 25.05.2025       *************

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
    int ways(int n, int i, vector<int> &dp)
    {
        if (i > n)
            return 0;
        if (i == n)
            return 1;

        if (dp[i] != -1)
            return dp[i];

        return dp[i] = ways(n, i + 1, dp) + ways(n, i + 2, dp);
    }

    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        return ways(n, 0, dp);
    }
};

int32_t main()
{
    Solution sol;

    cout << sol.climbStairs(6) << endl;

    CRACKED;
}
