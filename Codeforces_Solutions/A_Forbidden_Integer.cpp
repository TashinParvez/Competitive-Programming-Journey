
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
#define sq(x) ((x) * (x))                   // x^2  square
#define len(s) s.length()
#define setDec(x) fixed << setprecision(x)

#define YES output("YES")
#define Yes output("Yes")
#define NO output("NO")
#define No output("No")

using namespace std;

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
    string s;
    bool flag = false;

    cin >> n >> k >> x;

    if (k == x && k == 1)
    {
        NO;
    }
    else if (x != 2 && k >= 2 && n % 2 == 0)
    {
        YES;
        int nn = n / 2;
        cout << nn << nl;
        for (int i = 1; i <= nn; i++)
        {
            cout << 2 << " ";
        }
        cout << nl;
    }
    else if (x != 1)
    {
        YES;
        int nn = n / 1;
        cout << nn << nl;
        for (int i = 1; i <= nn; i++)
        {
            cout << 1 << " ";
        }
        cout << nl;
    }
    else
    {
        if (n % 2 != 0) // odd
        {
            if (k >= 3 && n >= 3)
            {
                YES;
                if ((n % 3) % 2 == 0)
                {
                    int three = n / 3;
                    int two = (n % 3) / 2;
                    cout << three + two << nl;
                    for (int i = 1; i <= two; i++)
                    {
                        cout << 2 << " ";
                    }
                    for (int i = 1; i <= three; i++)
                    {
                        cout << 3 << " ";
                    }
                }
                else
                {
                    int two = ((n) / 2) - 1;
                    int three = ((n % 2) / 3) + 1;

                    cout << (three + two) << nl;
                    for (int i = 1; i <= two; i++)
                    {
                        cout << 2 << " ";
                    }
                    for (int i = 1; i <= three; i++)
                    {
                        cout << 3 << " ";
                    }
                }
                cout << nl;
            }
            else
            {
                NO;
            }
        }
        else
            NO;
    }
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
