
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

using namespace std;



class Solution
{
public:
    int numRabbits(vector<int> &answers)
    {
        int ans = 0;
        map<int, int> mp;

        for (auto i : answers)
        {
            int index = i + 1;

            mp[index]++;

            if (index == 1)
                ans++;
            else if (mp[index] == 1)
                ans += index;
            else if (mp[index] == index)
                mp[index] = 0;
        }

        return ans;
    }
};



int32_t main()
{

    CRACKED;
}
