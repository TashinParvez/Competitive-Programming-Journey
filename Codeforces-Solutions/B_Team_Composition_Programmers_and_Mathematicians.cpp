
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
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, index;
    string s;
    bool flag = false;

    cin >> c >> m;

    if (c < m)
    {
        swap(c, m);
    }

    int c1 = c;
    int m1 = m;

    {
        // c > 1 && m > 1  ||

        // cout << c << " " << m << nl;

        // while (c >= 1 && m >= 1)
        // {

        //     if (c >= 3 && m >= 1)
        //     {
        //         count++;
        //         c -= 3;
        //         m -= 1;
        //         // cout << "2 count= " << count << nl;

        //         if ((m + c) < 4)
        //             break;
        //     }

        //     if (c >= 1 && m >= 3)
        //     {
        //         count++;
        //         c -= 1;
        //         m -= 3;
        //         // cout << "3 count= " << count << nl;

        //         if ((m + c) < 4)
        //             break;
        //     }

        //     // if (c % 2 == 0 || m % 2 == 0)
        //     if (c >= 2 && m >= 2)
        //     {
        //         count++;
        //         c -= 2;
        //         m -= 2;
        //         // cout << "1 count= " << count << nl;

        //         if ((m + c) < 4)
        //             break;
        //     }
        // }
    }

    int count = 0;
    {
        // tashin
        if (m % 2 == 0 && c % 2 == 0)
        {
            if (m <= c)
            {
                int two = m / 2;
                count += two;

                c -= (two * 2);
                m -= (two * 2);
            }
            else
            {

                int two = c / 2;
                count += two;
                c -= (two * 2);
                m -= (two * 2);
            }
        }

        int cc = c / 3;

        if (m && cc)
        {
            if (m <= cc)
            {
                count += m;
                c -= (m * 3);
                m -= m;
            }
            else
            {
                count += cc;
                c -= (cc * 3);
                m -= cc;
            }
        }

        //  cout << c << " " << m << nl;

        int mm = m / 3;

        if (mm && c)
        {
            if (mm <= c)
            {
                count += mm;
                c -= (mm * 3);
                m -= mm;
            }
            else
            {
                count += c;
                c -= (c * 3);
                m -= c;
            }
        }

        // cout << c << " " << m << nl;

        if ((m % 2 == 0 || c % 2 == 0) && (m > 0 && c > 0))
        {
            if (m <= c)
            {
                int two = m / 2;
                count += two;

                c -= (two * 2);
                m -= (two * 2);
            }
            else
            {

                int two = c / 2;
                count += two;
                c -= (two * 2);
                m -= (two * 2);
            }
        }
    }

    c = c1;
    m = m1;

    int count2 = 0; // case 2
    {

        // tashin

        if (m <= c)
        {
            int two = m / 2;
            count2 += two;

            c -= (two * 2);
            m -= (two * 2);
        }
        else
        {

            int two = c / 2;
            count2 += two;
            c -= (two * 2);
            m -= (two * 2);
        }

        int cc = c / 3;

        if (m && cc)
        {
            if (m <= cc)
            {
                count2 += m;
                c -= (m * 3);
                m -= m;
            }
            else
            {
                count2 += cc;
                c -= (cc * 3);
                m -= cc;
            }
        }

        //  cout << c << " " << m << nl;

        int mm = m / 3;

        if (mm && c)
        {
            if (mm <= c)
            {
                count2 += mm;
                c -= (mm * 3);
                m -= mm;
            }
            else
            {
                count2 += c;
                c -= (c * 3);
                m -= c;
            }
        }

        // cout << c << " " << m << nl;

        if ((m % 2 == 0 || c % 2 == 0) && (m > 0 && c > 0))
        {
            if (m <= c)
            {
                int two = m / 2;
                count2 += two;

                c -= (two * 2);
                m -= (two * 2);
            }
            else
            {

                int two = c / 2;
                count2 += two;
                c -= (two * 2);
                m -= (two * 2);
            }
        }
    }

    // cout << count2 << nl;
    cout << max(count, count2) << nl;
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
