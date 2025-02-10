/*
 *        Author :  Tashin.Parvez
 *    United International University
 *          Created: 09.02.2025
 */

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define CRACKED return 0;
#define nl "\n"
using namespace std;
#define int long long
#define ll long long
#define ull unsigned long long
#define ld long double
#define setdec(x) fixed << setprecision(x)
#define YES cout << "YES" << nl;
#define Yes cout << "Yes" << nl;
#define NO cout << "NO" << nl;
#define No cout << "No" << nl;

//--------------------------------- Debug --------------------------------
#define tashin cout << "____Tashin____" << nl;
#define parvez cout << "____Parvez____" << nl;
#define divider cout << " \n----------------------------\n" \
                     << nl;

#define dbg(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << " = " << arg1 << std::endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}

//--------------------------------- FOR --------------------------------
#define FOR_OVERLOAD(_1, _2, _3, NAME, ...) NAME
#define FOR(...) FOR_OVERLOAD(__VA_ARGS__, FOR_THREE_ARGS, FOR_TWO_ARGS, FOR_ONE_ARG)(__VA_ARGS__)
#define FOR_ONE_ARG(n) for (int i = 0; i < (n); i++)
#define FOR_TWO_ARGS(a, b) for (int i = (a); (a) <= (b) ? (i < (b)) : (i > (b)); (a) <= (b) ? ++i : --i)
#define FOR_THREE_ARGS(a, b, c) for (int i = (a); (c) > 0 ? (i < (b)) : (i > (b)); i += (c))
#define FORJ(n) for (int j = 0; j < (n); j++)
#define FORK(n) for (int k = 0; k < (n); k++)

//-------------------------------- Vector -------------------------------
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vpii vector<pair<int, int>>
#define vpsi vector<pair<string, int>>

#define pb push_back
#define ppb pop_back
#define vmin(a) (*min_element(a.begin(), a.end()))
#define vmax(a) (*max_element(a.begin(), a.end()))
#define vsum(a) accumulate(a.begin(), a.end(), 0LL)

//-------------------------------- Sort -------------------------------
#define all(a) (a).begin(), (a).end()
#define vsort(v) sort(v.begin(), v.end())
#define vsortrev(v) sort(v.begin(), v.end(), greater<>())
#define arrsort(a, n) sort(a, a + n)
#define arrsortrev(a, n) sort(a, a + n, greater<>())

//-------------------------------- pair -------------------------------
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;
#define mp make_pair
#define ff first
#define ss second

//-------------------------------- Map -------------------------------
#define mpii map<int, int>
#define mpsi map<string, int>
#define mpci map<char, int>

#define mptov(m, v) copy(m.begin(), m.end(), back_inserter(v))
#define vtomp(v, m) copy(v.begin(), v.end(), inserter(m, m.begin()))

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Some Func $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

template <typename T>
int len(const T &x) { return x.size(); }
#define mem(a, b) memset(a, b, sizeof(a))

//------------------------------ NumberTheory ------------------------------

#define lcm(a, b) (a * (b / __gcd(a, b)))
#define gcd(a, b) __gcd(a, b)

vector<int> sieve(int n)
{
    const int isprimeflag_limit = 1e8;
    static bitset<isprimeflag_limit> isprimeflag;
    vector<int> primeNumbers;
    if (n == 1 || n <= 0)
        return primeNumbers;
    for (int i = 3; i <= n; i += 2)
        isprimeflag[i] = 1;
    isprimeflag[2] = 1;
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
        if (isprimeflag[i])
            for (int j = i * i; j <= n; j += i)
                isprimeflag[j] = 0;
    primeNumbers.push_back(2);
    for (int i = 3; i <= n; i += 2)
        if (isprimeflag[i])
            primeNumbers.push_back(i);
    return primeNumbers;
}
vector<int> getprimefac(int n, vector<int> &primeNumbers)
{
    vector<int> factors;
    for (auto i : primeNumbers)
    {
        if (i * i > n)
            break;
        while (n % i == 0)
            factors.push_back(i), n /= i;
    }
    if (n > 1)
        factors.push_back(n);
    return factors;
}

void getDivisorsAll(int limit)
{
    const int idxfordivisor = 1e7;
    vector<int> divisorsCnt(idxfordivisor + 2, 0), divisorsSum(idxfordivisor + 2, 0);
    vector<vector<int>> alldivisors(idxfordivisor + 2);
    divisorsCnt.resize(limit + 1, 0);
    divisorsSum.resize(limit + 1, 0);
    for (int i = 1; i <= limit; i++)
        for (int j = i; j <= limit; j += i)
            divisorsCnt[j]++, divisorsSum[j] += i, alldivisors[j].push_back(i); /* return alldivisors;*/
}
vector<int> getDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
                divisors.push_back(n / i);
        }
    return divisors;
}
int NOD(int n, vector<int> primeNumbers)
{
    int nod = 1;
    for (auto i : primeNumbers)
    {
        if (i * i > n)
            break;
        if (n % i == 0)
        {
            int cnt = 1;
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            nod *= cnt;
        }
    }
    if (n > 1)
        nod *= 2;
    return nod;
}
int SNOD(int n)
{
    int sum = 0, sq = sqrt(n);
    for (int i = 1; i <= sq; i++)
        sum += (n / i - i) * 2;
    return sum + sq;
}
int SOD(int n, vector<int> &primeNumbers)
{
    int sod = 1;
    for (auto i : primeNumbers)
    {
        if (i * i > n)
            break;
        if (n % i == 0)
        {
            int isum = 1, icntSum = 1;
            while (n % i == 0)
                icntSum *= i, isum += icntSum, n /= i;
            sod *= isum;
        }
    }
    if (n > 1)
        sod *= (n + 1);
    return sod;
}
int eulerPhi(int n, vector<int> &primeNumbers)
{
    int phi = n;
    for (auto i : primeNumbers)
    {
        if (i * i > n)
            break;
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            phi /= i;
            phi *= (i - 1);
        }
    }
    if (n > 1)
    {
        phi /= n;
        phi *= (n - 1);
    }
    return phi;
}

//------------------------------- Int func's -------------------------------

#define CEIL(a, b) (a + b - 1) / b
#define FLOOR(a, b) a / b
#define min3(a, b, c) min(min(a, b), c)
#define mid3(a, b, c) (a + b + c) - max3(a, b, c) - min3(a, b, c)
#define max3(a, b, c) max(max(a, b), c)
#define MID(a, b) a + ((b - a) / 2);
#define suminrange(a, b) ((b * (b + 1)) / 2) - (((a - 1) * (a)) / 2)

template <typename T, typename U>
auto max(T a, U b) -> common_type_t<T, U> { return (a > b) ? a : b; }

ll numrev(ll n)
{
    ll tmp = n, ans = 0, r;
    while (tmp)
    {
        r = tmp % 10;
        ans = ans * 10 + r;
        tmp /= 10;
    }
    return ans;
}
bool isprime(ll n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool issquare(ll x)
{
    ll sq = sqrt(x);
    return sq * sq == x;
}
bool iseven(int n) { return !(n & 1); }

//----------MOD---------------
constexpr ll POW(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll r = POW(a, b / 2);
    if (b % 2)
        return r * r * a;
    else
        return r * r;
}
constexpr ll MOD(ll num, ll mod) { return ((num % mod + mod) % mod); }
constexpr ll BIGMOD(ll n, ll power, ll mod)
{
    if (power == 0)
        return 1;
    ll ans = BIGMOD(n, power / 2, mod);
    ans = ((ans % mod) * (ans % mod)) % mod;
    if (power % 2 == 1)
        return (ans * (n % mod)) % mod;
    else
        return ans;
}
inline ll modAdd(ll a, ll b, ll mod) { return MOD((MOD(a, mod) + MOD(b, mod)), mod); }
inline ll modSub(ll a, ll b, ll mod) { return MOD(((MOD(a, mod) - MOD(b, mod)) + mod), mod); }
inline ll modMul(ll a, ll b, ll mod) { return MOD((MOD(a, mod) * MOD(b, mod)), mod); }
inline ll modDiv(ll a, ll b, ll mod) { return modMul(a, BIGMOD(b, mod - 2, mod), mod); }

//------------------------------- string func's -------------------------------

ll strtoint(string s)
{
    istringstream ss(s);
    ll n;
    ss >> n;
    return n;
}
string inttostr(ll x)
{
    string s;
    while (x)
    {
        s += (char)(x % 10) + '0';
        x /= 10;
    }
    reverse(all(s));
    return s;
}

#define strtolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define strrev(s) reverse(s.begin(), s.end())
int getASCII(char c) { return c; }

#define arrprint(arr, len)          \
    for (int i = 0; i < (len); i++) \
        cout << (arr)[i] << (i + 1 == (len) ? '\n' : ' ');
#define vprint(vec)                           \
    for (size_t i = 0; i < (vec).size(); ++i) \
        cout << (vec)[i] << (i + 1 == (vec).size() ? '\n' : ' ');

/* --------------------- REMEMBER --------------------
   int       = -2e31  to  2e31 -1      2e31 = 2*10^9     max Digit = 10
   long long = -2e63  to  2e63 -1      2e63 = 9*10^18    max Digit = 19
   Max size of global array can upto 10e8

1. Think Greedy
2. Think Brute Force
3. Think solution in reverse order
4. Think DP [ check constraints carefully ]
5. Check base cases for DP and prove solution for Greedy
6. Think Graph
7. SubArray / Continious / SubSegment  =  PrefixSum

*/
const double PI = 3.1415926535;
const int inf = 1e18;
const int mod = 1000000007;

// bool cmp(const vi &a, const vi &b) { return a[len(a)-2] > b[len(b)-2]; }
// bool cmp(const vi &a, const vi &b) { return a[len(a)-2] > b[len(b)-2]; }

bool cmp(const vi &a, const vi &b)
{

    if (a[len(a) - 2] > b[len(b) - 2])
    {
        dbg(a[len(a) - 2], b[len(b) - 2]);
        return 1;
    }
    else if (a[len(a) - 2] < b[len(b) - 2])
    {
        // dbg(a[len(a) - 2], b[len(b) - 2]);
        return 0;
    }
    else
        return a > b;
}

void solution() // main solution
{
    int a, b, c, d;
    int i, j, k, m, n, q;
    int u, v, x, y, z;
    int l, r;
    int even = 0, odd = 0;

    string s;
    char chr;
    bool flag = false;

    int ans = 0, cnt = 0, idx = -1, sum = 0, product = 1, temp = 0;
    int mn = INT_MAX, mx = INT_MIN;

    cin >> n >> m;

    vector<vector<int>> arr(n);

    FOR(n)
    {
        sum = 0;
        int prev = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> a;

            a += prev;
            prev = a;
            sum += a;

            arr[i].pb(a);
        }
        arr[i].pb(sum);
    }

    // FOR(n)
    // {
    //     for (auto j : arr[i])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << nl;
    // }

    sort(all(arr), cmp);
    
    // sort(all(arr));

    // sort(all(arr));

    // tashin;
    // tashin;
    // // return;

    // FOR(n)
    // {
    //     for (auto j : arr[i])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << nl;
    // }

    sum = 0;
    int arrsum = 0;
    int itr = 0;
    int prevarr2ndlastidxval = 0;

    for (auto i : arr)
    {
        int thisarr = i[len(i) - 1]; // per array sum = ok

        prevarr2ndlastidxval += (itr == 0) ? 0 : arr[itr - 1][len(arr[itr - 1]) - 2];

        sum += thisarr + ((len(i) - 1) * prevarr2ndlastidxval); // chnage arrsum

        // dbg(prevarr2ndlastidxval);

        itr++;
    }

    cout << sum << nl;
}

int32_t main()
{
    faster;
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