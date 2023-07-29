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
    faster;

    string a;
    int b;
    cin >> a >> b;
    int val = 0;
    for (int i = 0; i < a.length(); i++)
    {
        val *= 10;
        val += a[i] - '0';
        if (i == 0 && val / b == 0)
        {
            continue;
        }
        cout << val / b;
        val %= b;
    }
    cout << nl;
    cout << "Mod " << val << nl;

    if (val == 0)
    {
        cout << "a is divisable by b";
    }
    else
    {
        cout << "a is not divisable by b";
    }
    cout << nl;
    CRACKED;
}
