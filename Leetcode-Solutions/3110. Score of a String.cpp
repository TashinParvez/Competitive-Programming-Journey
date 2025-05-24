
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
    int scoreOfString(string s)
    {
        int len = s.size();
        int sum = 0;

        for (int i = 1; i < len; i++)
        {
            sum += abs((int)s[i] - (int)s[i - 1]);
        }

        return sum;
    }
};

int32_t main()
{
    Solution sol;

    cout << sol.scoreOfString("hello") << endl;

    CRACKED;
}
