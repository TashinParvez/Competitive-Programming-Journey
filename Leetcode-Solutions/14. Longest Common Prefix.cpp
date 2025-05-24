
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
    string longestCommonPrefix(vector<string> &strs)
    {
        string s = "";
        int vsize = strs.size();
        int itr = 0;
        char c;

        for (int i = 0; i < vsize; i++)
        {
            // dbg(strs[i]);

            if (strs[i].size() <= itr)
                break;

            if (i == 0)
            {
                c = strs[i][itr];
            }
            else
            {
                if (c != strs[i][itr])
                    break;
            }

            if (i + 1 == vsize)
            {

                // tashin;

                s += strs[i][itr];
                i = -1;
                itr++;
            }
        }

        return s;
    }
};

int32_t main()
{
    Solution sol;

    // Sample input
    vector<string> nums = {"flower", "flow", "flight"};

    // Call the function
    string result = sol.longestCommonPrefix(nums);

    // Print the result

    cout << result << endl;

    CRACKED;
}
