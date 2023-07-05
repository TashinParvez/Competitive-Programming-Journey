
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

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
    string s;
    bool flag = false;
    string T, U;
    cin >> n;
    cin >> s;
    cin >> T;
    cin >> U;
    k = T[0] - s[0];
    if (k < 0)
    {
        int pp = 'z' - T[0] + (s[0] - 'a');
        k = pp;
    }

    // cout << k << nl;

    // while ((k > (int)'z'))
    // {
    //     k -= (int)('z' - 'a' + 1);
    // }

    // 199 bghor aagate hobe

    // cout << k << nl;

    // cout << k << nl;
    for (int i = 0; i < U.length(); i++)
    {    
        int ans = U[i];
        ans += k;

        // cout << ans << nl;

        while ((ans > (int)'z')) 
        {
            ans -= (int)('z' - 'a' + 1);
        }



        // cout << ans << nl << nl;

        U[i] = (char)ans;

        // U[i] = (char)((int)U[i] + k);
        // if ((int)(U[i] - 'z') > 0)
        // {
        //     U[i] = (char)(U[i] - 'z');
        // }

        cout << U[i];
        // cout << nl;
    }
    cout << nl;

    // cout << nl;
    // cout << nl;
}

int32_t main()
{
    faster;

    int t = 1;
    cin >> t;
    int c = 1;

    while (t--)
    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    // cout<<'a'<<nl;
    // cout<<(char)('a'+2);

    CRACKED;
}
