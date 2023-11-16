//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    22-06-23     *************************\

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl; // NewLine

#define int long long
using namespace std;

int32_t main()
{

    string a;
    int b;
    cin >> a >> b; // string and int

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
