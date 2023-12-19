#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fib(int n, vector<ll> &dpTable)
{
    if (n == 1 || n == 2)
        return 1;
    else if (dpTable[n] != -1)
        return dpTable[n];
    else
    {
        ll friend1 = fib(n - 1, dpTable);
        ll friend2 = fib(n - 2, dpTable);

        dpTable[n] = friend1 + friend2;

        return dpTable[n];
    }
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> dpTable(n + 1);
    
    for (int i = 0; i <= n; i++)
    {
        dpTable[i] = -1;
    }

    cout << fib(n, dpTable) << endl;
}