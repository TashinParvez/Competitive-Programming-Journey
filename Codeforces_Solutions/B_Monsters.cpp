
#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define Read(x) freopen(x, "r", stdin)
#define Write(x) freopen(x, "w", stdout)
#define CRACKED return 0;
#define nl "\n"

// data_type_compressions :
#define ull unsigned long long
#define ld long double

#define PI 3.14159265358979323846

// I/O :
#define loop(n) for (int i = 0; i < n; i++) // 0 to n Input or Output
#define output(x) cout << x << nl           // out
#define printarray(arr, len)      \
    for (int i = 0; i < len; i++) \
    {                             \
        cout << arr[i] << " ";    \
        if (i + 1 == len)         \
            cout << endl;         \
    } // array print

#define sq(x) ((x) * (x)) // x^2  square
#define len(s) s.length()
#define setDec(x) fixed << setprecision(x)

#define YES printf("YES\n")
#define Yes printf("Yes\n")
#define NO printf("NO\n")
#define No printf("No\n")

using namespace std;
void cmp(map<int, string> a, map<int, string> b)
{
}

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
    bool flag = false;
    cin >> n >> k;
    int arr[n];
    map<int, string, greater<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % k == 0)
        {
            cout << i + 1 << " ";
        }
        else
        {
            mp[arr[i] % k] += to_string(i + 1) + " ";
        }
    }
    // sort(mp.begin(), mp.end(), greater<int>());
    for (auto x : mp)
    {
        cout << x.second;
    }
    cout << nl;
}

int32_t main()
{
    faster;

    int t = 1;
    cin >> t;
    int c = 1;

    while (t--)
    {
        solution();
    }

    CRACKED;
}
