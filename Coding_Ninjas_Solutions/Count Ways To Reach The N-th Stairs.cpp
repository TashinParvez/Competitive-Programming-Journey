
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

//        https://www.youtube.com/watch?v=UUaMrNOvSqg

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

int dptable[100001] = {0};
#define MOD 1000000007

// long long MOD = 1e9+7;

/*

    the number of way to reach n = num of way to reach (n-1) + num of way to reach (n-2)

*/

int waysToReach(vector<int> &dptable, int n)
{
    if (dptable[n] != -1)
        return dptable[n];
    else if (n == 0)
    {
        return dptable[n] = 1;
    }
    else if (n == 1 || n == 2)
    {
        dptable[n] = n;
        return dptable[n];
    }
    else
    {
        dptable[n] = (waysToReach(dptable, n - 1) + waysToReach(dptable, n - 2)) % MOD;
        return dptable[n];
    }
}

int countDistinctWays(int nStairs)
{
    vector<int> dptable(nStairs + 1, -1);

    return waysToReach(dptable, nStairs);
}

// int main()
// {
//     int n;
//     cin >> n;

//     while (n--)
//     {
//         int r;
//         cin >> r;

//         cout << waysToReach(r) << nl;
//     }

//     CRACKED;
// }
