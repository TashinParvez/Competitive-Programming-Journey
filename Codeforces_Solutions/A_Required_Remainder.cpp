#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); // to make cin & cout faster

    int t;
    cin >> t;
    while (t--)
    {
        unsigned int x, y, n;
        cin >> x >> y >> n; // 10 5 15

        int k = -1;

        int mod = n / x;
        mod = mod * x;

        if (mod + y <= n)
        {
            cout << mod + y << endl;

            // cout<<mod+y<<"    running   1 "<<endl;
        }
        else
        {
            cout << (mod - x) + y << endl;

            // cout<<mod-x+y<<"   running   2 "<<endl;
        }
 
    }

    return 0;
}