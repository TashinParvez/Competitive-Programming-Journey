#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Fast GCD function
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve()
{
    int t;
    cin >> t;

    vector<ll> results(t);

    // Process each test case
    for (int i = 0; i < t; ++i)
    {
        ll X, Y;
        cin >> X >> Y;

        // Precompute X^2 and Y^2
        ll X2 = X * X, Y2 = Y * Y;

        // Compute X^2 - Y^2
        ll X2_Y2 = (X - Y) * (X + Y);

        // Compute GCD of (X^4 + X^2*Y^2 + Y^4) and (X^2 + Y^2)
        ll poly1 = X2 * X2 + X2 * Y2 + Y2 * Y2;
        ll poly2 = X2 + Y2;

        ll gcdPoly = gcd(poly1, poly2);

        // Final result
        results[i] = X2_Y2 * gcdPoly;
    }

    // Output results
    for (ll res : results)
    {
        cout << res << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
