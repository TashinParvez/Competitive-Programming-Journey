
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
int evenFunc(int &c, int &m)
{
    int count = 0;
    if (m <= c)
    {
        int two = m / 2;
        count += two;
        c -= (two * 2);
        m -= (two * 2);
    }
    else
    {
        int two = c / 2;
        count += two;
        c -= (two * 2);
        m -= (two * 2);
    }

    return count;
}

int unEqualFunc(int &c, int &m)
{
    int count = 0;
    int cc = c / 3;

    if (m <= cc)
    {
        count += m;
        c -= (m * 3);
        m -= m;
    }
    else
    {
        count += cc;
        c -= (cc * 3);
        m -= cc;
    }
    return count;
}

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, index;
    string s;
    bool flag = false;

    cin >> c >> m;
    int cc = c;
    int mm = m;

    int count = 0;
    int cnt = 0;

    bool f1 = true;
    bool f2 = true;

    while (f1 || f2)
    {
        if (f1)
        {
            if (c >= 2 && m >= 2)
                count += evenFunc(c, m);
            else
            {
                if (c < m)
                    swap(c, m);
                count += unEqualFunc(c, m);
            }

            if ((c + m) < 4 || c < 1 || m < 1)
                f1 = false;
        }

        if (f2)
        {
            if (cc == mm)
                cnt += evenFunc(cc, mm);
            else
            {
                if (cc < mm)
                    swap(cc, mm);
                cnt += unEqualFunc(cc, mm);
            }
            if ((cc + mm) < 4 || cc < 1 || mm < 1)
                f2 = false;
        }
    }
    cout << max(cnt, count) << nl;
}

int32_t main()
{
    // faster;
    // int t = 1;
    // cin >> t;
    // while (t--)
    //     solution();
    // CRACKED;

    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b;
        cin >> a >> b;

        int x = min(a, b);
        if (x == 0)
        {
            cout << 0 << nl;
            continue;
        }
        if (a == b)
        {
            cout << (a + b) / 4 << nl;
            continue;
        }

        int cnt = 0;
        if (b > a)
            swap(a, b);

        int div = a / 3;

        if (b >= div)
        {
            cnt += div;
            a /= 3;
            b -= div;
        }
        else
        {
            cnt += b;
            a -= b * 3;
            b -= b;
            cout << cnt << "\n";
            continue;
        }

        // a theke 3 ta neowa sesh
        if ((a + b) % 2 == 0 && a > 0)
        {
            cnt += (a + b) / 4;
        }

        cout << cnt << "\n";
    }
    return 0;
}