
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
    int i, j, k, l, m, n, d, w, x, y, z, t, count = 0, index;
    string s;
    bool flag = false;

    cin >> s;
    int len = s.length();
    string a, b, c;

    if (s.find('a') != string::npos && s.find('b') != string::npos)
    {
        if (s[1] == s[0])
            cout << s[0] << " " << s[1] << " " << s.substr(2, s.length() - 2) << nl;
        else
        {
            // ab____
            // ba____

            string str = s.substr(1, s.length() - 1);

            if (s[1] == 'a') // ba----
            {
                cout << s[0] << " " << s[1] << " " << s.substr(2, s.length() - 2) << nl;
            }

            else // ab_________
            {
                if (str.find('a') == string::npos)
                {
                    cout << s[0] << " " << s.substr(1, s.length() - 2) << " " << s[s.length() - 1] << nl;
                }
                else
                {
                    cout << s[0] << " " << str.substr(0, str.find('a')) << " " << str.substr(str.find('a'), str.length() - str.find('a')) << nl;
                    // cout << "TASHIN Ok" << nl;
                }
            }
        }
    }
    else if (s.find('a') == string::npos || s.find('b') == string::npos)

        cout << s[0] << " " << s.substr(1, s.length() - 2) << " " << s[s.length() - 1] << nl;
    else
    {
        cout << ":(" << nl;
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
