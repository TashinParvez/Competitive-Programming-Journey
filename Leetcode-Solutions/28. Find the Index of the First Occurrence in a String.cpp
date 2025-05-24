
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        *************       Created: 20.05.2025       *************

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
    int strStr(string haystack, string needle)
    {
        int ptr = 0;
        int hl = haystack.length();
        int nl = needle.length();
        if (hl < nl)
            return -1;

        // tashin;

        for (int i = 0; i < hl; i++)
        {
            if (haystack[i] == needle[0])
            {
                int flag = 1;
                for (int j = 1; j < nl; j++)
                {
                    if (haystack[i + j] == needle[j])
                    {
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }

                if (flag)
                    return i; 
            }
        }

        return -1;
    }
};

int32_t main()
{
    Solution sol;

    cout << sol.strStr("a", "a") << endl;

    CRACKED;
}
