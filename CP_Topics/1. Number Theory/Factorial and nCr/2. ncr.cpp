
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl
#define int long long
#define setDec(x) fixed << setprecision(x)
#define tashin cout << "____Tashin____" << nl;
#define dbg(x) cerr << #x << " = " << (x) << endl;
using namespace std;

template <typename T>
int len(const T &x) { return x.size(); }
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

int ncr(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    else if (r > n)
        return 0;
    else
        return factorial(n) / (factorial(r) * factorial(n - r));
}

int nCr(int n, int r)
{

    if (r > n)
        return 0;
    else if (r == n || r == 0)
        return 1;
    // recursive
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int32_t main()
{
    int n = 5;
    int r = 2;

    cout << ncr(n, r) << nl;
    cout << nCr(n, r) << nl;

    CRACKED;
}
