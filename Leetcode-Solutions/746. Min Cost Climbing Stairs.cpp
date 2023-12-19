
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
    static int solve(vector<int> &dptable, vector<int> &cost, int n)
    {
        if (dptable[n] != -1)
            return dptable[n];
        else if (n == 0)
            return cost[0];
        else if (n == 1)
            return cost[1];
        else
        {
            dptable[n] = cost[n] + min(solve(dptable, cost, n - 1), solve(dptable, cost, n - 2));
            return dptable[n];
        }
    }

    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        
        vector<int> dptable(n + 1, -1);

        return min(solve(dptable, cost, n - 1), solve(dptable, cost, n - 2));
    }
};