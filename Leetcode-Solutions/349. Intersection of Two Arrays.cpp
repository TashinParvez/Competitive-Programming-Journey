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
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, int> occu;

        int len = nums1.size();
        for (int i = 0; i < len; i++)
        {
            if (occu[nums1[i]] == 0)
                occu[nums1[i]]++;
        }

        len = nums2.size();
        for (int i = 0; i < len; i++)
        {
            if (occu[nums2[i]] == 1)
                occu[nums2[i]]++;
        }

        vector<int> ans;
        for (auto i : occu)
        {
            if (i.second >= 2)
            {
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};