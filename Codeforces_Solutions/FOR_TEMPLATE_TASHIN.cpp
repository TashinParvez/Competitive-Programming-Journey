#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pop pop_back

//--------------------------------------------------------------------------------

// Big Mod

int BigMod(int n, int power, int mod)
{
    if (power == 0)
        return 1;
    int ans = BigMod(n, power / 2, mod);
    ans = (ans % mod * ans % mod) % mod;
    if (power % 2)
        return (ans * (n % mod)) % mod;
    else
        return ans;
}

// FOR(0, a.length())
// {
//     if (a[i] != b[i])
//     {
//         flag = false;
//         break;
//     }
// }

const int dr[] = {0, 1, 0, -1, -1, 1, 1, -1, -2, -2, 2, 2, -1, -1, 1, 1};
const int dc[] = {1, 0, -1, 0, 1, 1, -1, -1, -1, 1, -1, 1, -2, 2, -2, 2};


/**************************************** Need to add Func ***********************************************/
 
//-------------------------------------------- PRIME NUMBER --------------------------------------

// to get the prime factors of that number ------------ use when working with a single number and don't want the overhead of precomputing primes.
vector<int> getprimefac(int n)
{
    vector<int> ans;
    int nn = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (nn % i == 0)
        {
            ans.pb(i);
            while (nn % i == 0)
            {
                nn /= i;
            }
        }
    }
    if (nn > 1)
    {
        ans.pb(nn);
    }
    return ans;
}


// working with multiple numbers and can afford the initial cost of generating the prime list.
vector<int> getprimefac(int n, vector<int> &primeNumbers) 
{
    vector<int> factors;

    for (auto i : primeNumbers)
    {
        if (i * i > n)
            break;

        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        factors.push_back(n);

    return factors;
}



vector<int> firstnprimes(int n)
{
    vector<int> primes;

    if (n <= 0)
        return primes;

    vector<bool> isPrime(n * log(n) + n, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; primes.size() < n; ++i)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j < isPrime.size(); j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

/********************************************************************************/

#define ll long long
int sum_digit(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

ll reverse_num(ll n)
{
    ll tmp = n, ans = 0, r;
    while (tmp > 0)
    {
        r = tmp % 10;
        ans = ans * 10 + r;
        tmp /= 10;
    }
    return ans;
}

ll factorial(ll n)
{
    ll i, ans = 1;
    for (i = n; i > 1; i--)
    {
        ans *= i;
    }
    return ans;
}


bool isSquare(ll x)
{
    ll sq = sqrt(x);
    return sq * sq == x;
}

ll mod_inverse(ll a, ll p, ll m)
{
    ll r = 1;
    while (p)
    {
        if (p % 2)
            r = ((r % m) * (a % m)) % m;
        a = ((a % m) * (a % m)) % m;
        p /= 2;
    }
    return r;
}

ll LOG2(ll n)
{
    ll v = 1, c = 0;
    while (v <= n)
        c++, v *= 2;
    return c - 1;
}

/********************************************************************************/

#define ll long long
#define all(a) (a).begin(), (a).end()


/********************************************************************************/

#define take_the_array_INT(x, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        scanf("%d", &x[i]);         \
    }

#define take_the_array_LL(x, o, n) \
    for (int i = o; i <= n; i++)   \
    {                              \
        scanf("%lld", &x[i]);      \
    }

#define take_the_array_DBL(x, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        scanf("%lf", &x[i]);        \
    }

#define print_the_array_INT(x, o, n) \
    for (int i = o; i <= n; i++)     \
    {                                \
        printf("%d ", x[i]);         \
    }                                \
    printf("\n");

#define print_the_array_LL(x, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        printf("%lld ", x[i]);      \
    }                               \
    printf("\n");

#define cin_the_array(x, o, n)   \
    for (int i = o; i <= n; i++) \
    {                            \
        cin >> x[i];             \
    }

#define cout_the_array(x, o, n)  \
    for (int i = o; i <= n; i++) \
    {                            \
        cout << x[i] << " ";     \
    }                            \
    cout << endl;

#define printa(a, L, R)         \
    for (int i = L; i < R; i++) \
    cout << a[i] << (i == R - 1 ? '\n' : ' ')

#define printv(a) printa(a, 0, a.size())

/********************************** input **********************************************/

#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define sfc(a) scanf("%c", &a)
#define sff(a, b) scanf("%d %d", &a, &b)
#define sffl(a, b) scanf("%lld %lld", &a, &b)
#define sfff(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sfffl(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)

//------------------------------------------ template --------------------------------
template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cout << '{';
    __print(x.first);
    cout << ',';
    __print(x.second);
    cout << '}';
}

template <typename T>
void __print(const T &x)
{
    int f = 0;
    cout << '{';
    for (auto &i : x)
        cout << (f++ ? "," : ""), __print(i);
    cout << "}";
}

void _print() { cout << "]\n"; }

template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cout << ", ";
    _print(v...);
}

//------------------------------------------ Binary Search  ------------------------------------------

#define MID(a, b) a + ((b - a) / 2);

int binary_search_first_true(function<bool(int)> f, int low, int high)
{
    while (low < high)
    {
        int mid = MID(low, high);
        if (f(mid))
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int binary_search_last_true(function<bool(int)> f, int low, int high)
{
    while (low < high)
    {
        int mid = MID(low, high);
        if (f(mid))
            low = mid;
        else
            high = mid - 1;
    }
    return low;
}

///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///king's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move


const ll mod = 1000000000+7;
    
ll bigMod(ll a, ll b, ll m){
    ll ans = 1;
    a = a % m;
    
    while(b){
        if(b & 1)
            ans = (ans * a) % m;
        
        a = (a*a) % m;
        b /= 2;
    }
    return ans;
}
 
ll   MOD(ll num){ return ((num%mod + mod)%mod); }
  
ll   MOD(ll num, ll mod){ return ((num%mod + mod)%mod); }
  
ll   modAdd(ll a, ll b){ return MOD(MOD(a) + MOD(b)); }
    
ll   modSub(ll a, ll b){ return MOD(MOD(a) - MOD(b)); }
  
ll   modMul(ll a, ll b){ return MOD(MOD(a) * MOD(b)); }
    
ll   modDiv(ll a, ll b){ return modMul(a, bigMod(b,mod-2, mod)); }
    
ll   Lcm(ll x, ll y) { return x * y / __gcd(x, y); }
    
ll   Sum(ll n) { return (n * (n + 1)) / 2; }

ll   logAB(ll a, ll b) { return log(a) / log(b); }
    
ll   ceilAB(ll a, ll b) { return (a + b - 1) / b; }

ll   ceilNegAB(ll a, ll b) { return (a - b + 1) / b; }
    
ll   chartoint(char ch) { return ch - '0'; }

bool isPowerOfTwo(ll n) { return n > 0 && !(n&(n-1)); }

bool coPrime(ll a, ll b) { return __gcd(a,b) == 1; }
    
bool isEqual(double a, double b) { return abs(a-b) < EPS; }
    
bool isGreater(double a, double b) { return a >= b + EPS; }
    
bool isGreaterEqual(double a, double b) { return a > b - EPS; }





// =======================================================
// =======================================================
// ======================= OLD ===========================
// =======================================================
// =======================================================


//--------------------------------- FOR Previous --------------------------------
#define FOR_OVERLOAD(_1, _2, NAME, ...) NAME
#define FOR(...) FOR_OVERLOAD(__VA_ARGS__, FOR_TWO_ARGS, FOR_ONE_ARG)(__VA_ARGS__)

#define FOR_ONE_ARG(n) for (int i = 0; i < (n); i++)
#define FOR_TWO_ARGS(a, b) for (int i = (a); (a) <= (b) ? (i < (b)) : (i > (b)); (a) <= (b) ? ++i : --i)

#define FORJ(n) for (int j = 0; j < (n); j++)
#define FORK(n) for (int k = 0; k < (n); k++)

// ------------------


#define fst cout << "----- First -----" << nl;
#define snd cout << "----- Second -----" << nl;
#define trd cout << "----- Third -----" << nl;
#define fth cout << "----- Fourth -----" << nl;


// ------------------