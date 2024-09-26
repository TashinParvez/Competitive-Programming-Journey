//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code
//--------------------------------- Debug --------------------------------
#define tashin cout << "____Tashin____" << nl;
#define parvez cout << "____Parvez____" << nl;

using namespace std;

/**********************************************************/

int lengthOfLongestSubstring(string s)
{
    int ans = 0;
    vector<int> v(300);
    int prevptr = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (v[s[i]] > 0)
        {
            if (v[s[i]] > prevptr)
                prevptr = v[s[i]];
        }

        ans = max(ans, (i - 1) - (prevptr - 1) + 1);
        v[s[i]] = i + 1;
    }

    return ans;
}

int32_t main()
{
    string s = "abba";

    cout << lengthOfLongestSubstring(s) << nl;

    CRACKED;
}
