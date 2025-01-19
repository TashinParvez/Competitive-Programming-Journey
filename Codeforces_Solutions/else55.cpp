#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
#define nl "\n"
#define int long long
#define ll long long
#define ull unsigned long long
#define ld long double
#define setdec(x) fixed << setprecision(x)

//--------------------------------- Debug --------------------------------

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
 



void solution() // main solution
{
   
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
    return 0;
}