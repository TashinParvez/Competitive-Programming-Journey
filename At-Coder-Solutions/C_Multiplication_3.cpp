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
using namespace std;

int32_t main()
{
    faster;

    int a, b, c; char ch;
    cin >> a >> b >> ch >> c;

    b *= 100;
    b += c;

    cout << (a * b) / 100 << nl;

    CRACKED;
}
