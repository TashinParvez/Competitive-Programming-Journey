
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

    /*

    YES
    4 2 4

    YES
    55 5 5 35

    NO

    NO

    YES
    1 1 1 1 1 1 1 1

    NO

    YES
    3 1 1

    YES
    111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111120

10  ----------------------     payni
25   TASHIN
25   TASHIN
25   TASHIN
25   TASHIN

8  ----------------------     payni
1 1 1 1 1 1 1 1
3 1 1
1000000000  ----------------------     payni
YES
NO
YES
NO
YES

    */

    cin >> n >> k;
    if (n < k)
        output("NO");
    else if (n == k)
    {
        output("YES");
        for (int i = 0; i < k; i++)
        {
            cout << 1 << " ";
        }
        cout << nl;
    }
    else
    {
        if (n % 2 == 0)
        {
            if (k % 2 != 0)
            {
                // all even

                if (n % k == 0)
                {
                    int pp = n / k;
                    output("YES");
                    for (int i = 0; i < k; i++)
                    {
                        cout << pp << " ";
                    }
                    cout << nl;
                    return;
                }
                //----- else

                int first = 2;
                int pp;

                while (n > 0)
                {
                    if ((n - 2) % (k - 1) == 0)
                    {
                        pp = (n - 2) / (k - 1);
                        n -= 2;
                        // cout<<"tsahin  "<<n<<"   "<<k<<nl;
                        if (k > n)
                        {
                            output("NO");
                            return;
                        }
                        k--;
                        break;
                    }
                    first += 2;
                    n -= 2;
                }
                if (n > 0)
                {
                    output("YES");
                    cout << first << " ";
                    for (int i = 1; i < k; i++)
                    {
                        cout << pp << " ";
                    }
                    cout << nl;
                    return;
                }
                output("NO");

                return;

                //---------------- tashin

                // cout << n << "  ----------------------     payni" << nl;
            }
            else
            {
                // all even

                if (n % k == 0)
                {
                    int pp = n / k;
                    output("YES");
                    for (int i = 0; i < k; i++)
                    {
                        cout << pp << " ";
                        // cout << "  TASHIN " << nl;
                    }
                    cout << nl;
                    return;
                }

                //-----

                int first = 2;
                int pp;
                while (n > 0)
                {
                    if ((n - 2) % (k - 1) == 0)
                    {
                        pp = (n - 2) / (k - 1);
                        n -= 2;
                        k--;
                        break;
                    }
                    first += 2;
                    n -= 2;
                }
                if (n > 0)
                {
                    output("YES");
                    cout << first;
                    for (int i = 1; i < k; i++)
                    {
                        cout << pp << " ";
                    }
                    cout << nl;
                    return;
                }
                output("NO");

                return;

                //---------------- tashin
            }
        }
        else
        {

            //  cout<<"Tasahin else"<<nl;
            if (n % k == 0)
            {
                int pp = n / k;
                output("YES");
                for (int i = 0; i < k; i++)
                {
                    //   cout<<"Tasahin else"<<nl;

                    cout << pp << " ";
                }
                cout << nl;
                return;
            }

            // ans all odd
            int first = 1;
            int pp;
            while (n > 0)
            {
                if ((n - 1) % (k - 1) == 0)
                {
                    pp = (n - 1) / (k - 1);
                    n--;
                    if (pp % 2 == 0 || (first) % 2 == 0)
                    {
                        first++;
                        continue;
                    }
                    break;
                }
                first++;
                n--;
            }
            if (n > 0 && pp != 0)
            {
                output("YES");
                cout << first << " ";
                for (int i = 1; i < k; i++)
                {
                    cout << pp << " ";
                }
                cout << nl;
                return;
            }

            output("NO");
            return;
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
