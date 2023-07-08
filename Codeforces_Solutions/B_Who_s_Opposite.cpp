
//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    21-06-23     *************************\

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
#define int long long
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

/*
    int n; cin>>n;
    int arr[n];
    for(auto &v : arr) cin>>v;


    if(!(i&1))   //-------------- EVEN  (for even --->> i&1 == 0)
        cout<<i<<nl;

*/

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
    string s;
    bool flag = false;

    cin >> a >> b >> c;
    int temp = a + b;

    b = max(a, b);
    a = temp - b;
    x = b - a;

    // cout << "ADD " << x;
    int higg = b + x - a;
    if ((higg) % 2 != 0 || b > higg || a > higg)
    {
        cout << -1 << nl;
        return;
    }
    // cout << "HIGGEST   " << higg << nl;
    if (c > a && c < b)
    {
        // cout << "TASHIN  " << nl;
        int ans = c + x;
        if (ans > higg)
        {

            if (ans - higg >= 1 && a > ans - higg)
                cout << ans - higg << nl;
            else
                cout << -1 << nl;
        }
        else if (b + x >= ans && b < ans)
        {
            // cout << c << nl;
            cout << ans << nl;
        }

        else
            cout << -1 << nl;
    }
    else
    {
        // cout << "TASHIN  " << nl;
        if (c > higg)
        {
            cout << -1 << nl;
            return;
        }
        else if (c > b)
        {
            int ans = c - x;
            if (ans != b && ans != a)
                cout << ans << nl;
            else
                cout << -1 << nl;
        }
        else
        {
            // c < A
            int ans = c + x;
            if (ans != b && ans != a && ans > a && ans < b)
                cout << ans << nl;
            else
                cout << -1 << nl;
        }
    }
}

int32_t main()
{
    faster;

    // #ifdef TashinParvez
    //     Read("input.txt");
    //   //  Write("output.txt");
    // #endif // TashinParvez

    int t = 1;
    cin >> t;
    int c = 1;

    while (t--)
    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}
