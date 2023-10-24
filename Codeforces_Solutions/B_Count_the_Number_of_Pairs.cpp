
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

// create char lower to upper
// create char upper to lower

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
    string s;
    bool flag = false;

    cin >> n >> k;
    cin >> s;

    map<char, int> lower;
    map<char, int> upper;
    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            char now = s[i];

            // if (s[i] == 'b')
            //     cout << "B came  " << lower[s[i] - ('a' - 'A')] << nl;

            if (upper[s[i] - ('a' - 'A')] > 0)
            {
                count++;
                upper[s[i] - ('a' - 'A')]--;
            }
            else
            {
                lower[s[i]]++;
            }
        }
        else
        {
            char now = s[i];

            if (lower[s[i] + ('a' - 'A')] > 0)
            {
                count++;
                lower[s[i] + ('a' - 'A')]--;
            }
            else
            {
                upper[s[i]]++;
            }
        }
    }
    if (k > 0)
    {
        for (auto i : lower)
        {
            if (i.second >= 2)
            {
                // cout << "lower" << nl;
                int cnt = i.second / 2;
                if (cnt >= k)
                {
                    count += k;
                    k = 0;
                    i.second -= k * 2;
                }
                else
                {

                    count += cnt;
                    k -= cnt;
                    i.second -= cnt * 2;
                }
                if (k == 0)
                    break;
            }
        }
        if (k > 0)
        {
            for (auto i : upper)
            {
                if (i.second >= 2)
                {
                    // cout << "UPPER" << nl;
                    int cnt = i.second / 2;
                    if (cnt >= k)
                    {
                        count += k;
                        k = 0;
                        i.second -= k * 2;
                    }
                    else
                    {
                        count += cnt;
                        k -= cnt;
                        i.second -= cnt * 2;
                    }
                    if (k == 0)
                        break;
                }
            }
        }
    }
    cout << count << nl;
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
