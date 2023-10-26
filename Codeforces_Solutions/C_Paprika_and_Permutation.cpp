
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
    bool flag = false;

    cin >> n;
    int arr[n];
    int check[n + 1] = {0};
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= n)
            if (mp[arr[i]] == 0)
            {
                check[arr[i]] = arr[i];
                mp[arr[i]]++;
                arr[i] = 0;
            }
    }
    sort(arr, arr + n);
    int cnt = 0;
    j = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (check[i] == i)
            continue;
        else
        {
            for (j; j < n; j++)
            {
                if (arr[j] == 0)
                    continue;
                else
                    break;
            }
            // arr[j] ke i banao
            if (i <= ((arr[j] - 1) / 2))
            {
                cnt++;
                arr[j] = 0; // there was wrong
            }
            else
            {
                cnt = -1;
                break;
            }
        }
    }
    cout << cnt << nl;
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
