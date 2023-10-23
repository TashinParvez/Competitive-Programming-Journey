
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
    int len;

    cin >> len >> k;
    cin >> s;
    int onlyEven = 0;
    int onlyOdd = 0;
    int arr[27] = {0};
    for (int i = 0; i < len; i++)
    {
        arr[(s[i] - 'a') + 1]++; // a = 1
        if (arr[(s[i] - 'a') + 1] % 2 == 0)
        {
            onlyEven++;
            onlyOdd--;
        }
        else
        {
            onlyOdd++;
        }
    }
    if ((len - k) % 2 == 0) // even
    {
        // cout<<"EVEN "<<onlyEven<<nl;
        // cout<<"odd "<<onlyOdd<<nl;
        if (onlyOdd == 0)
        {
            if (k % 2 == 0)
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
        else
        {
            if (onlyOdd == k)
            {
                cout << "YES" << nl;
            }
            else if (onlyOdd > k)
            {
                cout << "NO" << nl;
            }
            else
            {
                k -= onlyOdd;

                if (k % 2 == 0)
                    cout << "YES" << nl;
                else
                    cout << "NO" << nl;
            }
        }
    }
    else // ans len = odd
    {
        // cout << "EVEN =" << onlyEven << nl;
        // cout << "odd =" << onlyOdd << nl;

        if (k % 2 == 0)
        {
            if ((onlyOdd - k) > 1)
                cout << "NO" << nl;
            else
            {
                if (onlyOdd == 1 || onlyOdd - k == 1)
                    cout << "YES" << nl;
                else
                {
                    if (onlyOdd - k > 1)
                        cout << "NO" << nl;
                    else
                    {
                        if(onlyOdd%2==0 && k%2==0)
                        cout << "NO" << nl;
                        else
                        {
                            if(k-onlyEven%2==0)
                        cout << "NO" << nl;

                            else{
                                cout<<"YES"
                                <<nl;
                            }
                        }

                    }
                }
            }
        }
        else
        { // hoy odd=1 or even theke ekta baad(jora vanga)
            if (onlyOdd - k == 1)
                cout << "YES" << nl;
            else if (onlyOdd - k > 1)
                cout << "NO" << nl;
            else
            {
                k -= onlyOdd;
                if (k % 2 == 0)
                    cout << "NO" << nl;
                else

                    cout << "YES" << nl;
            }
        }
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
    int c = 1;

    while (t--)
    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}
