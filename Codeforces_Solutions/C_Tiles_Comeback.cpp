
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

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
    string s;
    bool flag = true;

    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            index = arr[i];
        }
        else if (arr[i] != index)
        {
            flag = false;
        }
    }

    if (flag && k <= n)
    {
        cout << "YES" << nl;
        return;
    }

    int cnt = 1;
    int lastIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[0])
        {
            if (cnt == k)
            {
                lastIndex = i - 1;
                break;
            }

            cnt++;

            if (cnt == k)
            {
                lastIndex = i;
                break;
            }
        }
    }

    if (cnt < k)
    {
        cout << "NO" << nl;
        return;
    }

    if ((lastIndex == n - 1 && cnt == k) || (arr[0] == arr[n - 1] && cnt == k))
    {
        cout << "YES" << nl;
        return;
    }

    if (cnt == k)
    {
        cnt = 1;
        // reverse(arr, arr + n);
        int lastIndex2 = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] == arr[n - 1])
            {
                if (cnt == k)
                {
                    lastIndex2 = i + 1;
                    break;
                }
                cnt++;
                if (cnt == k)
                {
                    lastIndex2 = i;
                    break;
                }
            }
        }

        if (lastIndex2 > lastIndex && cnt == k)
        {
            cout << "YES" << nl;
            return;
        }
        else
        {
            cout << "NO" << nl;
            return;
        }
    }
    else
    {
        cout << "NO" << nl;
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

        // reverse(arr, arr + n);
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}
