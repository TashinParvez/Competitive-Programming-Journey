
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

int min3(int a, int b, int c)
{
    return min(a, min(b, c));
}

int max3(int a, int b, int c)
{
    return max(a, max(b, c));
}

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, h, y, z, t, count = 0, index;
    string s;
    bool flag = false;

    cin >> n >> m >> h; // participants, the number of problems, and the duration of the competition, respectively.
    int arr[n] = {0};

    int solved = 0, time = 0;
    int place = 1;

    for (int i = 0; i <= n - 1; i++)
    {
        //  cout << "TASHIN" << nl;

        // cin >> a >> b >> c; // m probems
        int problems[m];
        for (j = 0; j < m; j++)
        {
            cin >> problems[j];
        }
        sort(problems, problems + m);

        int first = 0;
        int cnt = 0, taken = 0;
        for (j = 0; j < m; j++)
        {
            first += problems[j];
            if (first <= h)
            {
                cnt++;
                taken += first;
            }
            else
            {
                break;
            }
        }
        // cout << cnt << "                    " << taken << nl;
        // check position
        if (i == 0)
        {
            solved = cnt;
            time = taken;
            continue;
        }
        else
        {
            if (cnt > solved)
            {
                place++;
            }
            else if (cnt == solved)
            {
                if (time > taken)
                {
                    place++;
                    // cout << "TAShin" << nl;
                }
            }
        }
    }

    cout << place << nl;
}

// #define min3

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
