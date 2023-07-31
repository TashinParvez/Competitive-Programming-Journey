
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

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;

    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;

    cin >> x2 >> y2;
    cin >> x3 >> y3;

    int height = 0, width = 0;

    if ((y2 > y1 && y3 > y1))
    {
        height += abs(y1 - min(y2, y3));
    }
    else if (y2 < y1 && y3 < y1)
    {
        height += abs(y1 - max(y2, y3));
    }
    height++;

    if ((x2 > x1 && x3 > x1))
    {
        width += abs(x1 - min(x2, x3));
    }
    else if (x2 < x1 && x3 < x1)
    {
        width += abs(x1 - max(x2, x3));
    }

    cout << height + width << nl;
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
