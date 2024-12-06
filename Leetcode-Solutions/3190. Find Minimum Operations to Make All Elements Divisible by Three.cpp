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

using namespace std;

/**********************************************************/

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int ans = 0;
        for (auto i : nums)
        {
            if (i % 3)
            {
                ans++;
            }
        }
        return ans;
    }
};

int32_t main()
{
    vector<int> arr = {};
    int n;
    int k;
    string s;

    // cout<<  findAnagrams() <<nl;

    CRACKED;
}
