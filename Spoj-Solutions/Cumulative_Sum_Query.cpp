
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    16/03/24     ****************

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define Read(x) freopen(x, "r", stdin)
#define Write(x) freopen(x, "w", stdout)
#define CRACKED return 0;
#define nl "\n"
using namespace std;

#define newLine cout << nl;

// data_type_compressions :
#define int long long
#define ull unsigned long long
#define ld long double

#define minusone -1

// I/O :
#define sp " "                    // space
#define si(n) cin >> n;           // input  [ si = scan input]
#define output(x) cout << x << nl // output

#define square(x) ((x) * (x)) // x^2  square

#define setDec(x) fixed << setprecision(x)

#define len(s) s.length()
#define tolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower) // make string lowercase

#define YES cout << "YES" << endl;
#define Yes cout << "Yes" << endl;
#define NO cout << "NO" << endl;
#define No cout << "No" << endl;

#define min3(a, b, c) min(min(a, b), c)
#define mid3(a, b, c) (a + b + c) - max3(a, b, c) - min3(a, b, c)
#define max3(a, b, c) max(max(a, b), c)

#define SumInRange(a, b) ((b * (b + 1)) / 2) - (((a - 1) * (a)) / 2)

//--------------------------------- Debug --------------------------------

#define deb(n) cout << "Tashin   " << #n << " = " << n << endl;
#define tashin cout << "____Tashin____" << endl; // Pointer

#define dbg(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " = " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}

//--------------------------------- FOR --------------------------------
#define FOR0(n) for (int i = 0; i < (int)(n); i++)     //___ 0 to < N
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++) //___ 1 to <= N
#define FOR2(a, n) for (int i = a; i < n; i++)         //___ A to < N

//-------------------------------- Vector -------------------------------
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vii vector<pair<int, int>>
#define vsi vector<pair<string, int>>

#define pb push_back
#define pop pop_back

//-------------------------------- Sort -------------------------------

#define vsort(v) sort(v.begin(), v.end())                    // Vector asc
#define vSortRev(v) sort(v.begin(), v.end(), greater<int>()) // Vector dec

#define arrSort(a) sort(a, a + n)                    // array asc
#define arrSortRev(a) sort(a, a + n, greater<int>()) // array dec

//-------------------------------- pair -------------------------------

typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;

#define mp make_pair
#define ff first
#define ss second

//-------------------------------- Map -------------------------------
#define mii map<int, int>
#define mapsi map<string, int>
#define mapci map<char, int>

/******************************* Some Func ********************************************/

int getASCII(char c)
{
    return c;
}

bool evenOdd(int n) //  Odd = 0   &&   Even = 1
{
    if (!(n & 1)) // Formula:  EVEN  (for even --->> i&1 == 0)
        return 1;
    else
        return 0;
}

void printarray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        (i + 1 == len) ? cout << arr[i] << nl : cout << arr[i] << " ";
}

/********************************* CODE NOW *************************************************/

/*

1. Think Greedy
2. Think Brute Force
3. Think solution in reverse order
4. Think DP [ check constraints carefully ]
5. Check base cases for DP and prove solution for Greedy
6. Think Graph

*/

const double PI = 3.1415926535;
const int inf = 1e18;
const int mod = 1000000007;

void solution()
{
    int a, b, c, d;
    int i, j, k, l, m, n, q;
    int x, y, z, t;
    int cnt = 0, index = -1, sum = 0;
    string s;
    bool flag = false;
    int ans;

    cin >> n;
    int arr[n];
    FOR0(n)
    cin >> arr[i];

    int preSum[n];
    preSum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
    }

    cin >> q;

    while (q--)
    {
        cin >> a >> b;
        if (a - 1 < 0)
        {
            cout << preSum[b] << nl;
        }
        else
            cout << preSum[b] - preSum[a - 1] << nl;
    }
}

int32_t main()
{
    faster;

    int t = 1;
    // cin >> t;
    int c = 1;

    while (t--)
    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}
