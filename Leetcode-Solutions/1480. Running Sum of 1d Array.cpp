
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

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

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> vi;
        int sum = 0;

        for (auto &i : nums)
        {
            i += sum;
            sum = i;
        }

        return vi;
    }
};