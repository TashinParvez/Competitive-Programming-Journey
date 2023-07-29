//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    22-06-23     *************************\

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define CRACKED return 0;
#define nl endl; // NewLine

#define int long long
#define output(x) cout << x << nl // out
#define printarray(arr, len)      \
    for (int i = 0; i < len; i++) \
    {                             \
        cout << arr[i] << " ";    \
        if (i + 1 == len)         \
            cout << endl;         \
    } // array print
using namespace std;

int BigMod(int n, int power, int mod)
{
    if (power == 0)
        return 1;

    int ans = BigMod(n, power / 2, mod);
    ans = (ans % mod * ans % mod) % mod;

    if (power % 2 == 1) // power odd
        return (ans * n % mod) % mod;
    else
        return ans;
}

int32_t main()
{
    int n = 1378;
    int power;
    cin >> power;
    int mod = 10;
    cout << BigMod(n, power, mod) << nl;

    CRACKED;
}
