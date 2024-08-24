/**
 *        Author :  Tashin.Parvez
 *    United International University
 *          Created: 23.08.2024
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

const int idxLimit = 1e8;
bool isprimeflag[idxLimit];

vector<int> sieve(int n)
{
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

//------------------------------- Int func's -------------------------------

int presum[idxLimit];

void solution() // main solution
{
    int a, b, c, d;
    int i, j, k, m, n, q;
    int u, v, x, y, z;

    int ans, cnt = 0, sum = 0, product = 1;

    int limit = 10000000 + 2;

    sieve(limit);

    x = sqrt(limit);
    y = sqrt(x);

    // dbg(x, y);

    x = 3200;
    y = 60;

    FOR(x + 1)
    {
        FORJ(y + 1)
        {
            int num = i * i + (j * j * j * j);
            if (isprimeflag[num])
            {
                presum[num] = 1;
            }
        }
    }

    FOR(1, limit)
    {
        presum[i] += presum[i - 1];
    }

    cin >> q;

    while (q--)
    {
        cin >> x;
        cout << presum[x] << nl;
    }
}

int32_t main()
{
    faster;
    solution();
    CRACKED;
}