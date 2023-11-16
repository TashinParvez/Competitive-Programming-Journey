
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    29/10/23     ****************

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define Read(x) freopen(x, "r", stdin)
#define Write(x) freopen(x, "w", stdout)
#define CRACKED return 0;
#define nl "\n"
#define newLine cout << nl;

// data_type_compressions :
#define ull unsigned long long
#define ld long double
#define ll long long

#define minusone -1
#define PI 3.14159265358979323846

// I/O :
#define sp " "                    // space
#define si(n) cin >> n;           // input  [ si = scan input]
#define output(x) cout << x << nl // output

#define square(x) ((x) * (x)) // x^2  square

#define setDec(x) fixed << setprecision(x)

#define len(s) s.length()
#define tolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower) // make string lowercase

#define YES cout << "YES" << endl;
#define Yes cout << "Yes" << endl;
#define NO cout << "NO" << endl;
#define No cout << "No" << endl;

#define min3(a, b, c) min(min(a, b), c)
#define mid3(a, b, c) (a + b + c) - max3(a, b, c) - min3(a, b, c)
#define max3(a, b, c) max(max(a, b), c)

#define SumInRange(a, b) ((b * (b + 1)) / 2) - (((a - 1) * (a)) / 2)

using namespace std;

std::ostream &operator<<(std::ostream &dest, __int128_t value)
{
    std::ostream::sentry s(dest);
    if (s)
    {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[128];
        char *d = std::end(buffer);
        do
        {
            --d;
            *d = "0123456789"[tmp % 10];
            tmp /= 10;
        } while (tmp != 0);
        if (value < 0)
        {
            --d;
            *d = '-';
        }
        int len = std::end(buffer) - d;
        if (dest.rdbuf()->sputn(d, len) != len)
        {
            dest.setstate(std::ios_base::badbit);
        }
    }
    return dest;
}
ll upperPart(int a, int b, int c) // a to b
{
    double sum = 1;
    int index = 1;               // 1 to c
    for (int i = b; i >= a; i--) // a to b
    {
        sum *= (i * 1.0) / (index);
        index++;
    }
    return (ll)sum;
}

void solution()
{
    ll i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, cnt = 0, index;
    string s;

    cin >> n;
    __int128_t sum = 0;
    for (int i = 2; i <= n; i++)
    {
        a = upperPart(i + 1, n, (n - i));
        sum += a;
    }

    cout << sum << nl;
}

int main()
{

    solution();
    return 0;
}
