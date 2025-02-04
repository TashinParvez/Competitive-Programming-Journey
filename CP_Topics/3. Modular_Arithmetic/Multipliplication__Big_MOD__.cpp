//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    22-06-23     *************************\

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl; // NewLine
#define int long long
#define ll long long

using namespace std;
 
int BigMod(int n, int power, int mod) // (a^b) % mod
{
    if (power == 0)
        return 1;

    int ans = BigMod(n, power / 2, mod);

    ans = ((ans % mod) * (ans % mod)) % mod;

    if (power % 2 == 1) // power odd
        return (ans * (n % mod)) % mod;
    else
        return ans;
}

int32_t main()
{
    int n;
    int power;
    cin >> n >> power;
    int mod;
    cin >> mod;
    cout << BigMod(n, power, mod) << nl;

    CRACKED;
}
