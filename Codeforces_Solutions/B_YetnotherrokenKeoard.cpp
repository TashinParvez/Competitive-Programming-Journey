
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
#define mapii map<int, int>
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

7. SubArray / Continious / SubSegment  =  PrefixSum

*/

const double PI = 3.1415926535;
const int inf = 1e18;
const int mod = 1000000007;

void solution()
{
    int a, b, c, d;
    int i, j, k, l, m, n;
    int x, y, z, t;
    int cnt = 0, index = -1, sum = 0;
    bool flag = false;
    int ans;

    string given;
    cin >> given;

    string s = "";
    // cout << len(s) << nl;

    int big = -1, small = -1; // not set

    for (int i = 0; i < len(given); i++)
    {
        if (given[i] == 'B')
        {
            // tashin;
            // dbg(big);

            if (big != -1)
            {
            }
            else // loop
            {
                int j = len(s) - 1;
                // cout << given[i] << nl;

                while (j > -1)
                {
                    // tashin;
                    // cout << s[j] << "  ";

                    if (s[j] >= 'A' && s[j] <= 'Z')
                    {
                        big = j;
                        break;
                        // dbg("FIND");
                    }
                    j--;
                }

                // cout << nl;
                // dbg("here--------");
                // dbg(big);
                // dbg(s);
                // dbg("here--------");
            }

            if (big == -1)
            {
                continue;
            }
            // dbg(big);
            if (small > big)
                small--;
            string lst = s.substr(big + 1, len(s) - (big + 1)); // last part (ok)
            s = s.substr(0, big) + lst;
            big = -1;
            // dbg(s);
        }
        else if (given[i] == 'b')
        {
            if (small != -1)
            {
            }
            else // loop
            {
                int j = len(s) - 1;
                // dbg(j);

                while (j > -1)
                {
                    if (s[j] >= 'a' && s[j] <= 'z')
                    {
                        small = j;
                        break;
                    }
                    j--;
                }
            }

            if (small == -1)
            {
                continue;
            }

            if (small < big)
                big--;

            string lst = s.substr(small + 1, len(s) - (small + 1)); // last part (ok)
            s = s.substr(0, small) + lst;
            small = -1;
        }
        else
        {
            s = s + given[i];

            if (given[i] >= 'A' && given[i] <= 'Z')
                big = len(s) - 1;
            else
                small = len(s) - 1;
        }
    }

    cout << s << nl;
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
