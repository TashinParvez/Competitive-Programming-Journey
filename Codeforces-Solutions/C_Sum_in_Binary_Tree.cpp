
//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    10-05-23     *************************\

#include <bits/stdc++.h>

// data_type_compressions :

#define int long long
#define ull unsigned long long
#define ld long double

#define PI 3.14159265358979323846

#define loop(n) for (int i = 0; i < n; i++) // 0 to n Input or Output

// I/O :
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define Read(x) freopen(x, "r", stdin)
#define Write(x) freopen(x, "w", stdout)
#define CRACKED return 0;

#define output(x) cout << x << nl // out
#define sq(x) ((x) * (x))         // x^2
#define len(s) s.length()

#define YES printf("YES\n")
#define Yes printf("Yes\n")
#define NO printf("NO\n")
#define No printf("No\n")
#define nl "\n"
#define setDec(x) fixed << setprecision(x)

using namespace std;

/*
    int n; cin>>n;
    int arr[n];
    for(auto &v : arr) cin>>v;


    if(!(i&1))   //-------------- EVEN
        cout<<i<<nl;

*/

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
    string s;
    bool flag = false;

    cin >> n;
    int sum = 0;
    count = 1;
    // count*2 == start of line
    //
    if (n == 1)
        cout << 1 << nl;
    else
    {
        for (int i = n; i >= 1;)
        {
            sum += i;
            if (i % 2 == 0)
            {
                i /= 2;
            }
            else
            {
                i--;
                i /= 2;
            }
        }
        cout << sum << nl;
    }
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

    while (t--)
        solution();

    CRACKED;
}
