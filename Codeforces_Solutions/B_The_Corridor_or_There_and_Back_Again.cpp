

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

pair<string, int> func(int a, int b, int c, int d)
{
    int aa = a + b;
    int bb = c + d;

    return {"aa", bb};
}

bool comparatorFuc(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first)
        return true;
    else
    {
        if (a.second >= b.second)
            return true;
        else
            return false;
    }
}

void solution()
{
    int i, j, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
    cin >> n;

    vector<pair<int, int>> traps;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        traps.push_back({a, b});
    }

    // sort(traps.begin(), traps.end(), comparatorFuc); // O(n)

    int k = 0;
    int higgestCanGo = 0; // storing index
    for (int i = 0; i < n; i++)
    {
        int index = traps[i].first;
        int blast = traps[i].second;

        // tashin
        // imp    ((k - 1) / 2));

        int canGoFromThisPos = index + ((blast - 1) / 2);

        if (higgestCanGo)
        {
            // if (index > higgestCanGo)
            //     break;

            higgestCanGo = min(higgestCanGo, canGoFromThisPos);
        }
        else
            higgestCanGo = canGoFromThisPos;
    }
    cout << higgestCanGo << nl;
}

void solve()
{
    int n;
    cin >> n;

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int j, k;
        cin >> j >> k;

        ans = min(ans, j + ((k - 1) / 2));
    }
    cout << ans << "\n";
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
        // solve();
    }

    CRACKED;
}
