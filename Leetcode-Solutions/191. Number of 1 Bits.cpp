
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
    int hammingWeight(int n)
    {
        int cnt = 0;

        while (n)
        {
            int temp = n / 2;
            if (n != temp * 2)
                cnt++;
                
            n = temp;
        }

        return cnt;
    }
};

int32_t main()
{
    Solution sol;

    cout << sol.hammingWeight(128) << endl;

    CRACKED;
}
