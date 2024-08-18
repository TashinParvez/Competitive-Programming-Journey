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
    vector<int> findDuplicates(vector<int> &nums)
    {
        int len = nums.size();

        map<int, int> occu;

        for (int i = 0; i < len; i++)
        {
            occu[nums[i]]++;
        }

        vector<int> ans;
        for (auto i : occu)
        {
            if (i.second > 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};