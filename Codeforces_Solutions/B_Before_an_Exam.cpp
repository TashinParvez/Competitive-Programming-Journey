
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
    string s;
    bool flag = false;
    int time;
    int maximum = 0;
    int minimum = 0;
    cin >> d >> time;

    int arr[d][2];
    for (int i = 0; i < d; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        maximum += arr[i][1];
        minimum += arr[i][0];
    }

    if (maximum < time || minimum > time)
    {
        cout << "NO" << nl;
        return;
    }
    else
    {

        int extra = maximum - time;
        cout << "YES" << nl;

        for (int i = 0; i < d; i++)
        {
            if (extra == 0)
            {
                cout << arr[i][1] << " ";
            }
            else
            {
                int kk = arr[i][1] - arr[i][0];
                if (kk <= extra)
                {
                    cout << arr[i][0] << " ";
                    extra -= kk;
                }
                else
                {
                    cout << arr[i][1] - extra << " ";
                    extra -= extra;
                }
            }
        }
        cout << nl;
    }
}

int32_t main()
{
    faster;

    // #ifdef TashinParvez
    //     Read("input.txt");
    //   //  Write("output.txt");
    // #endif // TashinParvez

    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}
