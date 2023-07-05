
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

    cin >> n >> l;
    int arr[n];
    int mn = 1000 + 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < mn)
            mn = arr[i];
    }
    int higgLen = 0;
    int first = -1, last = -1;

    sort(arr, arr + n);

    int ls = 0;
    if (mn != 0)
    {
        last = arr[0];
        higgLen = mn;
        ls = mn;
    }

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - arr[i - 1]) > higgLen)
        {
            first = arr[n - 1];
            last = arr[n];
            higgLen = arr[i] - arr[i - 1];
        }
    }
    int lt = 0;
    if (arr[n - 1] != l)
    {
        if ((l - arr[n - 1]) > higgLen)
        {
            first = arr[n - 1];
            last = i;
            higgLen = l - arr[n - 1];
        }
        lt = l - arr[n - 1];
    }

    if (first == -1)
    {
        if (ls <= higgLen && higgLen >= lt)
            cout << setDec(9 + 1) << (double)higgLen << nl;
        else
        {
            double dd = max(lt, ls);
            cout << setDec(9 + 1) << (double)dd << nl;
        }
    }
    else if (l == arr[n - 1])
    {
        double dd = ((higgLen) / 2.0);

        if (ls <= higgLen && higgLen >= lt)
            cout << setDec(9 + 1) << (double)dd << nl;
        else
        {
            double dd = max(lt, ls);
            cout << setDec(9 + 1) << (double)dd << nl;
        }
    }
    else
    {
        if (l - arr[n - 1] == higgLen)
        {
            if (ls <= higgLen && higgLen >= lt)
                cout << setDec(9 + 1) << (double)higgLen << nl;
            else
            {
                double dd = max(lt, ls);
                cout << setDec(9 + 1) << (double)dd << nl;
            }
        }
        else
        {
            double dd = ((higgLen) / 2.0);

            if (ls <= higgLen && higgLen >= lt)
                cout << setDec(9 + 1) << (double)dd << nl;
            else
            {
                double dd = max(lt, ls);
                cout << setDec(9 + 1) << (double)dd << nl;
            }
        }
    }

    // cout
}

int32_t main()
{
    faster;

    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}
