
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
    bool uniqueOccurrences(vector<int> &arr)
    {
        int len = arr.size();

        map<int, int> rep;
        map<int, int> occu;

        for (int i = 0; i < len; i++)
        {
            int prev = occu[arr[i]];
            occu[arr[i]]++;
            int now = occu[arr[i]];

            rep[prev]--;
            rep[now]++;
        }

        for (auto i : rep)
        {
            if (i.second >= 2)
                return false;
        }
        return true;
    }
};