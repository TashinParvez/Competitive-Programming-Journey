//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    22-06-23     *************************\

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define CRACKED return 0;
#define nl endl;                   // NewLine
#define output(x) cout << x << nl; // out

#define int long long
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
    faster;

    // double a = 30.0, b = 9.9 * 3 + 0.3;
    // printf("%.20lf  \n%.20lf \n", a, b);
    // (a == b) ? cout << "YES" : cout << "NO";

    // double a = 324.0 / -1.0;
    // // double a = 0.0/-1.0;
    // cout << a << nl;
    // if (a > -1 && a < 1)
    //     cout << a * -1 << nl;

    double d;
    cin >> d;

    cout << floor(d) << nl;
    cout << (int)(d) << nl;

    cout << ceil(d) << nl;
    (d - (int)d) == 0 ? cout << (int)(d) : cout << (int)d + 1 << nl;
}
