
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl
#define int long long
using namespace std;
//--------------------------------------------------------------------------------------------------

int findPow(int a, int b) // [in template it is POW]    a^b     -->    complexity  log(b)
{
    int ans = 1;
    if (b == 0)
        return ans;
    int halfOfB = findPow(a, b / 2);
    if (b % 2 == 0)
        ans = halfOfB * halfOfB;
    else
        ans = halfOfB * halfOfB * a;

    return ans;
}

int32_t main()
{
    int a, b;
    cin >> a >> b;
    cout << findPow(a, b) << nl;

    CRACKED;
}


//  1000 1000