
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

#include <bits/stdc++.h>
#define    CRACKED        return 0;
#define    nl             endl                                                    // NewLine
#define    int            long long
#define    null           NULL
#define    sp             " "                                                   // space
#define    setDec(x)      fixed << setprecision(x) 
#define    len(s)         s.length()
#define    tashin         cout << "____Tashin____" << nl;                       // Pointer
#define    deb(n)         cout << "Tashin   " << #n << " = " << n << endl;    // debug code
#define    debt           cout << "Tashin   " << endl;                          // debug code
using      namespace      std;
//--------------------------------------------------------------------------------------------------

int sod(int n)  // number of divisors -> SNOD
{
    int sum = 0;
    int sq = sqrt(n);
    for(int i =  1; i<=sq;i++)
    {
        int cnt = n/i - i;
        sum+=cnt*2;
    }
    sum+=sq;

    return sum;
}


int32_t main()
{
    int n;
    cin >> n;
    cout << sod(n) << nl;

    CRACKED;
}