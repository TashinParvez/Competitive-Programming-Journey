
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
int ncr(int n, int r)
{
    double d = 1;
    for (int i = 1; i <= r; i++)
    {
        double k = (n / (r - i + 1));
        d *= k;
        n--;
    }
    return d;
    // cout << " NCR " << nl;
}

int recursion(int countDays, int minDay)
{
    int total = 0;
    if (minDay > countDays)
        return total;

    return ncr(countDays, minDay) + recursion(countDays, minDay + 1);
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

void solution()
{
    int i, j, k, l, m, n, q, a, b, c, d, w, x, y, z, t, countDays = 0, index;
    string s;
    bool flag = false;

    cin >> n >> k >> q; // array len, min days , maximum temp
    int arr[n];
    int arr2[n] = {0};

    j = 0;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] <= q)
        {
            j++;
        }
        else
        {
            j = 0;
        }

        if (arr[i] <= q)
        {
            arr2[i] = 1;

            if (j >= k)
                countDays++;
        }
    }

    // cout << " count days " << countDays << nl;
    // int ans = recursion(countDays, k);
    // cout << ans << nl;

    int days = 0;

    // cout << "_________" << nl;
    // printArray(arr2, n);
    // cout << "MIN DSAYS " << k << nl;

    for (int i = 0; i < n; i++)
    {
        if (arr2[i] > 0)
        {

            if (i > 0)
                arr2[i] += arr2[i - 1];
            if (arr2[i] >= k)
            {

                days++;
                // cout << " i=" << i << " " << days << nl;
            }
            if (arr2[i] > k)
            {
                days += (arr2[i] - k);
                // cout << " i=" << i << " " << days << " ADDED " << arr2[i] - k << nl;
            }
        }
    }
    // cout << nl << nl;
    // printArray(arr2, n);
    // cout << "ANS  ";

    // int counter = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     counter = 0;
    //     // cin >> n >> k >> q; // array len, min days ,maximum temp
    //     if (n - (i) < k)
    //         break;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr2[j] < 1)
    //             break;

    //         if (arr2[i])
    //         {
    //             counter++;
    //             if (counter >= k)
    //             {
    //                 // cout << "TASHIN i=" << i << " j=" << j << " k=" << k << " counter=" << counter << nl;
    //                 days++;
    //             }
    //         }
    //         else
    //             counter = 0;
    //     }
    // }

    cout << days << nl;
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
    int pp = t;
    while (t--)
    {
        // cout << "Case " << pp - t << "  " << nl;
        solution();
    }

    CRACKED;
}
