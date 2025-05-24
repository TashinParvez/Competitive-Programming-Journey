
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        *************       Created: 22.05.2025       *************

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
    bool isPalindrome(string s)
    {
        bool ans = 1;

        for (int i = 0, j = s.size() - 1; i < j;)
        {

            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            {
                if ((s[i] >= 'A' && s[i] <= 'Z'))
                {
                    s[i] = s[i] - ('A' - 'a');
                }
            }
            else
            {
                i++;
                continue;
            }

            if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9'))
            {
                if ((s[j] >= 'A' && s[j] <= 'Z'))
                {
                    s[j] = s[j] - ('A' - 'a');
                }
            }
            else
            {
                j--;
                continue;
            }

            if (s[i] != s[j])
            {
                ans = 0;
                break;
            }
            else
            {
                i++, j--;
            }
        }

        return ans;
    }
};

int32_t main()
{
    Solution sol;

    // cout << sol.isPalindrome("A man, a plan, a canal: Panama") << endl;

    cout << sol.isPalindrome("0P") << endl;

    // tashin;

    CRACKED;
}
