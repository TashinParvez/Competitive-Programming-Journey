//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    10-05-23     *************************\

#include <bits/stdc++.h>

// data_type_compressions :

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
int mp[4001] = {-2};
int cut(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MAX;
    if (mp[n] > -2)
        return mp[n];
    return mp[n] = 1 + max(max(cut(n - a, a, b, c), cut(n - b, a, b, c)), cut(n - c, a, b, c));
}

void solution()
{
    int n, a, b, c;

    cin >> n;
    int number = n;
    int arr[3];
    cin >> a >> b >> c;

    int cnt = 0;
    for (int i = 0; i * a <= n; i++)
    {
        for (int j = 0; (i * a + j * b) <= n; j++)
        {
            int zc = n - (a * i + b * j);
            if (zc % c == 0)
            {
                cnt = max(cnt, (i + j + zc / c));
            }
        }
    }
    cout << cnt << nl;
}

int32_t main()
{
    faster;

    solution();

    CRACKED;
}