
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
    bool isValid(string s)
    {
        stack<char> st;
        bool ans = 1;

        for (int i = 0; i < s.size(); i++)
        {

            // dbg(s[i]);

            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    ans = 0;
                    break;
                }

                char c = st.top();
                st.pop();

                // dbg(c);
                // tashin;

                if (s[i] == ')' && c == '(')
                {
                }
                else if (s[i] == '}' && c == '{')
                {
                }
                else if (s[i] == ']' && c == '[')
                {
                }
                else
                {
                    // dbg(i);
                    // dbg(s[i]);
                    // tashin;

                    ans = 0;
                    break;
                }
            }
        }

        if (!st.empty())
            ans = 0;

        return ans;
    }
};

int32_t main()
{
    Solution sol;

    cout << sol.isValid("}") << endl;

    CRACKED;
}
