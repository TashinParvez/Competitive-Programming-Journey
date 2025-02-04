//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    22-06-23     *************************\

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl; // NewLine

#define int long long
using namespace std;

int32_t main()
{

    int a, b, ans, mod;

    // --------------- add =  ((a % mod + b % mod) % mod) --------------
    a = 123;
    b = 34;
    mod = 7;
    ans = (a % mod + b % mod) % mod;

    cout << "Add:      (a + b) % mod = " << ans << nl;

    // --------------- Subtraction  = ((a % mod - b % mod) + mod) % mod --------------

    a = 123;
    b = 34;

    mod = 7;

    ans = ((a % mod - b % mod) + mod) % mod;

    cout << "sub:      (a - b) % mod = " << ans << nl;

    // ---------------- Neg Num  =  (a % mod + mod) % mod  -----------------------

    a = -192;
    ans = (a % mod + mod) % mod ;

    cout << "Neg Num:        a % mod = " << ans << nl;

    CRACKED;
}
