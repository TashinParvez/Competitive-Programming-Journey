
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    int arr[2];
    arr[0] = x, arr[1] = y;
    sort(arr, arr + 2);

    int ans = 0;

    int move = ceil(arr[0] / (float)k);
    ans += move * 2;
    arr[1] = arr[1] - move * k;
    if (arr[1] > 0)
    {

        move = ceil(arr[1] / (float)k);
        ans += move * 2;
    }

    cout << (x > y ? ans - 1 : ans) << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}