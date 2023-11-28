
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

void solution()
{
    ll i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, cnt = 0, index;
    string s;
    cin >> n >> s;

    map<string, int> mpsi;
    if (n == 2)
    {
        mpsi[s]++;
    }
    else
        for (int i = 0; i < n; i++)
        {
            string st;
            if (i + 1 <= n - 1)
            {
                st += s[i];
                st += s[i + 1];
                mpsi[st]++;
            }
        }
    int len = 0;
    string ans;
    for (auto i : mpsi)
    {
        if (i.second >= len)
        {
            ans = i.first;
            len = i.second;
        }
    }
    cout << ans << nl;
}

int main()
{

    solution();
    return 0;
}
