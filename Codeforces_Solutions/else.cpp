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

int32_t main()
{

    int n, k, t, d;
    cin >> n >> t >> k >> d;

    double totalUse = (n * 1.0 / k);
    if (totalUse - (int)totalUse != 0)
        totalUse++;

        
    cout << "totalUse " << totalUse << nl;
    int forOne = (t * (int)totalUse);
    int pp = (n + k - 1) / k * t;

    cout << "Their  " << pp << nl;
    cout << "Myone  " << forOne << nl;
    CRACKED;
}
