/**
 *        Author :  Tashin.Parvez
 *    United International University
 *          Created: 24.08.2024
 **/

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

// #define Read(x)          freopen(x, "r", stdin)
// #define Write(x)         freopen(x, "w", stdout)
#define CRACKED return 0;
#define nl "\n"
using namespace std;
#define newline cout << nl;

// data_type_compressions :
#define int long long
#define ll long long
#define ull unsigned long long
#define ld long double
#define minusone -1

// I/O :
#define sp " "                    // space
#define si(n) cin >> n;           // input  [ si = scan input]
#define output(x) cout << x << nl // output
#define setdec(x) fixed << setprecision(x)

//--------------------------------- length --------------------------------
template <typename T>
int len(const vector<T> &v) { return v.size(); }
template <typename K, typename V>
int len(const map<K, V> &m) { return m.size(); }
int len(const string &s) { return s.length(); }

#define YES cout << "YES" << nl;
#define Yes cout << "Yes" << nl;
#define NO cout << "NO" << nl;
#define No cout << "No" << nl;

//--------------------------------- Debug --------------------------------
#define deb(n) cout << "Tashin   " << #n << " = " << n << nl;
#define tashin cout << "____Tashin____" << nl; // Pointer
#define parvez cout << "____Parvez____" << nl; // Ens Pointer

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

#define fst cout << "----- First -----" << nl;
#define snd cout << "----- Second -----" << nl;
#define trd cout << "----- Third -----" << nl;
#define fth cout << "----- Fourth -----" << nl;

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
#define vii vector<pair<int, int>>
#define vsi vector<pair<string, int>>

#define pb push_back
#define pob pop_back

#define vmin(a) (*min_element(a.begin(), a.end()))
#define vmax(a) (*max_element(a.begin(), a.end()))
#define vsum(a) accumulate(a.begin(), a.end(), 0LL)

//-------------------------------- Sort -------------------------------
#define all(a) (a).begin(), (a).end()

#define vsort(v) sort(v.begin(), v.end())                 // Vector asc
#define vsortrev(v) sort(v.begin(), v.end(), greater<>()) // Vector dec

#define arrsort(a, n) sort(a, a + n)                 // array asc
#define arrsortrev(a, n) sort(a, a + n, greater<>()) // array dec

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

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Some Func $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

#define mem(a, b) memset(a, b, sizeof(a))

//------------------------------ NumberTheory ------------------------------

#define lcm(a, b) (a * (b / __gcd(a, b)))
#define gcd(a, b) __gcd(a, b)

const int isprimeflag_limit = 1e7 + 123;
static bitset<isprimeflag_limit> isprimeflag;
vector<int> primeNumbers;
void sieve(int n)
{
    if (n == 1 || n <= 0)
        return;
    for (int i = 3; i <= n; i += 2)
        isprimeflag[i] = 1;
    isprimeflag[2] = 1;
    isprimeflag[0] = isprimeflag[1] = 0;
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
        if (isprimeflag[i])
            for (int j = i * i; j <= n; j += i)
                isprimeflag[j] = 0;
    primeNumbers.push_back(2);
    for (int i = 3; i <= n; i += 2)
        if (isprimeflag[i])
            primeNumbers.push_back(i);
}
void getprimefac(int n)
{
    vector<int> factors;
    for (auto i : primeNumbers)
    {
        if (1LL * i * i > n)
            break;
        if (n % i == 0)
        {
            factors.push_back(i); // the catch
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
        factors.push_back(n);

    if (factors.size() <= 1)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << factors[len(factors) - 1] << nl;
    }
}

//------------------------------- Int func's -------------------------------

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

ll POW(ll a, ll b)
{
    if (!b)
        return 1;
    ll r = POW(a, b / 2);
    if (b % 2)
        return r * r * a;
    else
        return r * r;
}

#define suminrange(a, b) ((b * (b + 1)) / 2) - (((a - 1) * (a)) / 2)

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

#define strtolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower) // make string lowercase

//------------------------------- Char func's -------------------------------
int getASCII(char c) { return c; }

//------------------------------- Print func's -------------------------------

void arrprint(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        (i + 1 == len) ? cout << arr[i] << nl : cout << arr[i] << " ";
}
void vecprint(const vector<int> &vec)
{
    for (size_t i = 0; i < vec.size(); ++i)
    {
        if (i + 1 == vec.size())
            cout << vec[i] << nl;
        else
            cout << vec[i] << " ";
    }
}

/************************************************* CODE NOW *************************************************/

/*
    INT      = -2e31  to  2e31-1
    LongLong = -2e63  to  2e63-1
    Max size of global array can upto10e8

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

bool comparePairs(const pii &a, const pii &b) { return a.first > b.first; }

void solution() // main solution
{
    int a, b, c, d;
    int i, j, k, m, n, q;
    int u, v, x, y, z;
    int l, r;
    int even = 0, odd = 0;

    string s;
    bool flag = false;

    int ans, cnt = 0, idx = -1, sum = 0, product = 1;
    int mn = INT_MAX, mx = INT_MIN;

    sieve(1e7);

    while (cin >> n)
    {
        if (n == 0)
            break;
        if (n < 0)
            n *= -1;
        if (n == 1)
        {
            cout << -1 << nl;
            continue;
        }

        getprimefac(n);
    }

    // newline;
}

int32_t main()
{
    faster;

    int t = 1;
    int c = 1;

    while (t--)
    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}