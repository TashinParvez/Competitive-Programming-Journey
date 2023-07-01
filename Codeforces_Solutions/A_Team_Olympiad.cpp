
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
// #define int long long
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
    int i, j, k, l, m, n, d, w, x, y, z, t, count = 0, index;
    bool flag = false;
    cin >> n;

    int arr[n];
    int s = 8;
    s = n / 3;
    int a[s] = {0};
    int b[s];
    int c[s];
    int aa = 0, bb = 0, cc = 0;
    int o1 = 0, o2 = 0, o3 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            o1++;
            if (aa >= s)
                continue;
            a[aa] = i + 1;
            aa++;
        }
        else if (arr[i] == 2)
        {
            o2++;
            if (bb >= s)
                continue;
            b[bb] = i + 1;
            bb++;
        }
        else if (arr[i] == 3)
        {
            o3++;
            if (cc >= s)
                continue;
            c[cc] = i + 1;
            cc++;
        }
    }
    int ans = min(o1, min(o2, o3));
    cout << ans << nl;
    o1 = 0, o2 = 0, o3 = 0;
    for (int i = 0; i < ans; i++)
    {
        cout << a[i] << " " << b[i] << " " << c[i];
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

    // int t = 1; cin >> t;
    // int c = 1;

    // while (t--)
    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}
