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

/*******************/

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int fstocc = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int lstocc = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (lstocc > 0 && fstocc != lstocc)
        {
            lstocc--;
        }

        if (!binary_search(nums.begin(), nums.end(), target)) 
        {
            fstocc = lstocc = -1;
        }

        return {fstocc, lstocc};
    }
};