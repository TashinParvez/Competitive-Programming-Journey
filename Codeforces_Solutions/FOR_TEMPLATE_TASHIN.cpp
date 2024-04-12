#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pop pop_back




//--------------------------------- FOR --------------------------------


// OLD 

#define FOR0(n)                  for (int i = 0; i < (int)(n); i++)     //___ 0 to < N
#define FOR1(i, n)               for (int i = 1; i <= (int)(n); i++)    //___ 1 to <= N
#define FOR2(a, n)               for (int i = a; i < n; i++)            //___ A to < N

// NEW

#define FOR_OVERLOAD(_1, _2, NAME, ...) NAME
#define FOR(...)                 FOR_OVERLOAD(__VA_ARGS__, FOR_TWO_ARGS, FOR_ONE_ARG)(__VA_ARGS__)

#define FOR_ONE_ARG(n)           for(int i = 0; i < (n); i++)
#define FOR_TWO_ARGS(a, b)       for(int i = (a); (a) <= (b) ? (i < (b)) : (i > (b)); (a) <= (b) ? ++i : --i)




//------------------------------------------  Vector Min & Sum  --------------------------------

    int n;
    vector<int> a(n);
    int mnA = *min_element(a.begin(), a.end());  
    int sA = accumulate(a.begin(), a.end(), 0LL);


//------------------------------------------------  BELLOW  --------------------------------------


#define checkEqual(a, b, c) \
    if (a == b && a == c)   \
        return 1 else return 0; 




//  4.  add big mod


// FOR(0, a.length())
// {
//     if (a[i] != b[i])
//     {
//         flag = false;
//         break;
//     }
// }



/**************************************** Need to add Func ***********************************************/

int intreverse(int n)
{
    int newnumb = 0;
    while (n)
    {
        newnumb = newnumb * 10 + n % 10;
        n /= 10;
    }
    return newnumb;
}


// Get All The Divisors Of That Number
vector<int> getdiv(int n) 
{
    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.pb(i);
            if (n / i != i)
            {
                ans.pb(n / i);
            }
        }
    }
    return ans;
}
//-------------------------------------------- PRIME NUMBER --------------------------------------

// to get the prime factors of that number
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

// get instant prime
vector<int> sieve(int n) 
{
    int *a = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 0)
        {
            vect.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                a[j] = 1;
            }
        }
    }
    return vect;
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
ll gcd(ll num1, ll num2)
{
    ll a, b, r;
    a = num1;
    b = num2;
    r = a % b;
    while (r > 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
ll lcm(ll num1, ll num2) { return (num1 * num2) / gcd(num1, num2); }
bool prime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
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
ll LOG2(ll n)
{
    ll v = 1, c = 0;
    while (v <= n)
        c++, v *= 2;
    return c - 1;
}

#define all(s) s.begin(),s.end()
string int_to_str(ll x)
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
ll str_to_int(string s)
{
    istringstream ss(s);
    ll n;
    ss >> n;
    return n;
}
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

/********************************************************************************/

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

