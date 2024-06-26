//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    15/04/24     ****************

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

#define len(s) s.length()

#define YES cout << "YES" << nl;
#define Yes cout << "Yes" << nl;
#define NO cout << "NO" << nl;
#define No cout << "No" << nl;

//--------------------------------- Debug --------------------------------

#define deb(n) cout << "Tashin   " << #n << " = " << n << nl;
#define tashin cout << "____Tashin____" << nl; // Pointer

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

#define FOR_OVERLOAD(_1, _2, NAME, ...) NAME
#define FOR(...) FOR_OVERLOAD(__VA_ARGS__, FOR_TWO_ARGS, FOR_ONE_ARG)(__VA_ARGS__)

#define FOR_ONE_ARG(n) for (int i = 0; i < (n); i++)
#define FOR_TWO_ARGS(a, b) for (int i = (a); (a) <= (b) ? (i < (b)) : (i > (b)); (a) <= (b) ? ++i : --i)

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

#define vsort(v) sort(v.begin(), v.end())                    // Vector asc
#define vsortrev(v) sort(v.begin(), v.end(), greater<int>()) // Vector dec

#define arrsort(a) sort(a, a + n)                    // array asc
#define arrsortrev(a) sort(a, a + n, greater<int>()) // array dec

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

/************************************************* CODE NOW *************************************************/

void solution() // main solution
{
    int a, b, d;
    int i, j, k, l, m, n, q;
    int x, y, z, t;

    string s;
    bool flag = false;

    int ans, cnt = 0, idx = -1, sum = 0;

    cin >> n;

    char c;
    cin >> c;

    map<char, vi> mp;

    FOR(1, 2 * n + 1)
    {
        cin >> s;
        mp[s[1]].pb((s[0] - '0'));
    }

    int ccnt = 0;
    cnt = 0;

    for (auto i : mp) // i.ss  = vector of int's
    {
        if (i.ff == c) // trump card
        {
            vi vct = i.ss;
            ccnt = vct.size();
        }
        else
        {
            vi vct = i.ss;
            cnt += vct.size() % 2;
        }
    }

    if (ccnt - cnt < 0 || (ccnt - cnt) % 2)
    {
        cout << "IMPOSSIBLE" << nl;
        return;
    }

    idx = 0;

    vi vct = mp[c];
    vsort(vct);
    mp[c] = vct;

    for (auto i : mp) // i.ss  = vector of int's
    {
        if (i.ff == c) // trump card
            continue;
        else
        {
            vi vct = i.ss;
            vsort(vct);
            int len = vct.size();
            if (len)
            {
                for (int j = 0; j + 1 < len; j += 2)
                {
                    a = vct[j];
                    b = vct[j + 1]; 
                    cout << min(a, b) << i.ff << " " << max(a, b) << i.ff << nl;
                }
                if (len % 2)
                {
                    cout << vct[len - 1] << i.ff << " " << mp[c][idx] << c << nl;
                    idx++;
                }
            }
        }
    }

    vct = mp[c];
    int len = vct.size();

    while (idx + 1 < len)
    {
        a = mp[c][idx];
        b = mp[c][idx + 1];
        cout << min(a, b) << c << " " << max(a, b) << c << nl;
        idx += 2;
    }
}

int32_t main()
{
    faster;

    int t = 1;
    cin >> t;
    int c = 1;

    while (t--)
    {
        solution();
    }

    CRACKED;
}