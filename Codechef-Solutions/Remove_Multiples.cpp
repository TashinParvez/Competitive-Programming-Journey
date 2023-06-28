
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

    cin >> n >> m; // 1 2 3 4 ....N
    int arr[m];
    int arrIN[n - m];
    int temp = 1;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        // for (int j = temp; j < arr[i]; j++)
        // {
        //     sum += j;
        // }
        // // cout <<"SUM "<< sum << nl;
        // temp = arr[i] + 1;
    }

    sort(arr, arr + m);

    // printarray(arr,m);

    for (int i = 0; i < m; i++)
    {
        for (int j = temp; j < arr[i]; j++)
        {
            sum += j;
        }
        // cout << "SUM " << sum << nl;
        temp = arr[i] + 1;
    }

    if (temp <= n)
    {
        for (int j = temp; j <= n; j++)
        {
            sum += j;
        }
    }
    cout << sum << nl;
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
