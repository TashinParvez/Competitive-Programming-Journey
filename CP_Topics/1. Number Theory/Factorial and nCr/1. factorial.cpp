
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include   <bits/stdc++.h>
#define    CRACKED        return 0;
#define    nl             endl
#define    int            long long
#define    setDec(x)      fixed << setprecision(x) 
#define    tashin         cout << "____Tashin____" << nl;
#define    dbg(x)         cerr << #x << " = " << (x) << endl;
using      namespace      std;

template <typename T> int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

int factorial(int n)
{
    if (n == 0)
        return 1;
    int product = 1;
    for (int i = 1; i <= n; i++)
        product *= i;
    return product;
}

int32_t main()
{   
    int n = 5;

    cout << factorial(n) << nl;

    CRACKED;
}
