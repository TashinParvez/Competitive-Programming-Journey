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
    int n, i;
    cin >> n;

    int sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int reach;
    cin >> reach;

    int cnt = (reach / sum); // 4

    // cout << "CNT " << cnt << nl;
    // cout << "sum " << sum << nl;

    reach -= (cnt * sum);

    cnt *= n;
    i = 0;

    int mahabub = 0;
    while (reach >= 0)
    {
        cnt++;
        reach -= arr[i];
        i++;
        if (i == n)
            i = 0;
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

    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}
