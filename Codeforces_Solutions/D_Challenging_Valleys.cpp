
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
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
             if (i == n - 1)
            {
                cnt++;
                continue;
            }
            for (int ii = 1; ii < n; ii++)
            {
                if (arr[i] == arr[ii])
                {
                    if (ii == n - 1)
                    {
                        cnt++;
                        i = ii;
                        break;
                    }
                    continue;
                }
                else if (arr[ii] > arr[i])
                {
                    cnt++;
                    i = ii;
                    break;
                }
                else
                {
                    i = ii - 1;
                    break;
                }
            }
        }
        else if (arr[i] < arr[i - 1])
        {
            // cout << "COMES" << nl;
            if (i == n - 1)
            {
                cnt++;
                continue;
            }
            for (int ii = i + 1; ii < n; ii++)
            {
                if (arr[i] == arr[ii])
                {
                    if (ii == n - 1)
                    {
                        cnt++;
                        i = ii;
                        break;
                    }
                    continue;
                }
                else if (arr[ii] > arr[i])
                {
                    cnt++;
                    i = ii;
                    break;
                }
                else
                {
                    i = ii - 1;
                    break;
                }
            }
        }
    }
    if (cnt == 1)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;

    // cout << cnt << nl;
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
