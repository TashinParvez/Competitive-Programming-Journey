
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
    int lengthOfLastWord(string s)
    {
        int len = s.size();
        int cnt = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && cnt == 0)
            {
                continue;
            }
            else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                cnt++;
            }
            else
            {
                break;
            }
        }

        return cnt;
    }
};

int32_t main()
{
    Solution sol;

    // Call the function

    cout << sol.lengthOfLastWord("   fly me   to   the moon  ") << endl;

    CRACKED;
}
