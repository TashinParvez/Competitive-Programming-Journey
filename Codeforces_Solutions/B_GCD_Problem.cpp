/*
 *        Author :  Tashin.Parvez
 *    United International University
 *          Created: 05.02.2025
 */

#include <bits/stdc++.h>
#define faster                 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CRACKED                return 0;
#define nl                     "\n"
using   namespace              std;
#define ll                     long long
#define ull                    unsigned long long
#define ld                     long double
#define setdec(x)              fixed << setprecision(x)
#define YES                    cout << "YES" << nl;
#define Yes                    cout << "Yes" << nl;
#define NO                     cout << "NO" << nl;
#define No                     cout << "No" << nl;

//--------------------------------- Debug --------------------------------
#define tashin                 cout << "____Tashin____" << nl;
#define parvez                 cout << "____Parvez____" << nl;
#define divider                cout << " \n----------------------------\n" << nl;

#define dbg(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>                          void __f(const char *name, Arg1 &&arg1) { cout << name << " = " << arg1 << std::endl; }
template <typename Arg1, typename... Args>        void __f(const char *names, Arg1 &&arg1, Args &&...args) { const char *comma = strchr(names + 1, ','); cout.write(names, comma - names) << " = " << arg1 << " | ";   __f(comma + 1, args...); }

//--------------------------------- FOR --------------------------------
#define FOR_OVERLOAD(_1, _2, _3, NAME, ...) NAME
#define FOR(...)                 FOR_OVERLOAD(__VA_ARGS__, FOR_THREE_ARGS, FOR_TWO_ARGS, FOR_ONE_ARG)(__VA_ARGS__)
#define FOR_ONE_ARG(n)           for(int i = 0; i < (n); i++)
#define FOR_TWO_ARGS(a, b)       for(int i = (a); (a) <= (b) ? (i < (b)) : (i > (b)); (a) <= (b) ? ++i : --i)
#define FOR_THREE_ARGS(a, b, c)  for(int i = (a); (c) > 0 ? (i < (b)) : (i > (b)); i += (c))
#define FORJ(n)                  for (int j = 0; j < (n); j++)
#define FORK(n)                  for (int k = 0; k < (n); k++) 

//-------------------------------- Vector -------------------------------
#define vi                       vector<int>
#define vc                       vector<char>
#define vs                       vector<string>
#define vb                       vector<bool>
#define vpii                     vector<pair<int, int>>
#define vpsi                     vector<pair<string, int>>

#define pb                       push_back
#define ppb                      pop_back
#define vmin(a)                  (*min_element(a.begin(), a.end())) 
#define vmax(a)                  (*max_element(a.begin(), a.end()))
#define vsum(a)                  accumulate(a.begin(), a.end(), 0LL)

//-------------------------------- Sort -------------------------------
#define all(a)                   (a).begin(),(a).end()
#define vsort(v)                 sort(v.begin(), v.end())
#define vsortrev(v)              sort(v.begin(), v.end(), greater<>())
#define arrsort(a, n)            sort(a, a + n)
#define arrsortrev(a, n)         sort(a, a + n, greater<>())

//-------------------------------- pair -------------------------------
typedef pair<int, int>           pii;
typedef pair<int, string>        pis;
typedef pair<string, int>        psi;
#define mp                       make_pair
#define ff                       first
#define ss                       second

//-------------------------------- Map -------------------------------
#define mpii                     map<int, int>
#define mpsi                     map<string, int>
#define mpci                     map<char, int>

#define mptov(m, v)              copy(m.begin(), m.end(), back_inserter(v))
#define vtomp(v, m)              copy(v.begin(), v.end(), inserter(m, m.begin()))

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Some Func $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

template <typename T> int len(const T &x) { return x.size(); }
#define   mem(a, b)             memset (a, b, sizeof(a))

//------------------------------ NumberTheory ------------------------------

#define       lcm(a, b)                                      (a * (b / __gcd(a,b)) )
#define       gcd(a, b)                                      __gcd(a,b)

const int isprimeflag_limit = 1e8;
static bitset<isprimeflag_limit> isprimeflag;
void sieve(int n)
{
    vector<int> primeNumbers;
    if (n == 1 || n <= 0)
        return;
    for (int i = 3; i <= n; i += 2)
        isprimeflag[i] = 1;
    isprimeflag[2] = 1;
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
        if (isprimeflag[i])
            for (int j = i * i; j <= n; j += i)
                isprimeflag[j] = 0;
}

void solution()  // main solution
{
    int a, b, c, d;
    int i, j, k, m, n, q;
    int u, v, x, y, z;
    int l, r;
    int even = 0, odd = 0;

    string s; char chr;
    bool flag = false;

    int ans = 0, cnt = 0, idx = -1, sum = 0, product = 1, temp = 0;
    int mn = INT_MAX, mx = INT_MIN;

    cin >> n;

   if (n % 2 == 0)
    {
        cout << n - 3 << " " << 2 << " " << 1 << nl;
    }
    else
    {
        a = n / 2 - 1;
        b = n / 2 + 1;

        while (1)
        {
            c = gcd(a, b);
            if (c == 1)
                break;

            a--;
            b++;

        }


        // cout << a + b + c << nl;
        
        c =  gcd(a, b) ;

        // cout << gcd(a, b) << nl;
        // if (n == a + b + c)
        // {
        //     YES;
        // }
        // else
        // {
        //     NO;
        // }
        // cout << nl;

        cout << a << " " << b << " " << c << nl;
    }
}

int32_t main()
{
    faster;
    int t = 1;
    cin >> t;
    int c = 1;
    // sieve(1e6);
    while (t--)
    {
        // cout << "Case " << c++ << ": "; 
        solution();
    }
    CRACKED;
}