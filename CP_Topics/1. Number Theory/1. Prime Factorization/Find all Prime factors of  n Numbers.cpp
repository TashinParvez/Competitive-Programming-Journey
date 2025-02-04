#include <bits/stdc++.h>
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

//------------------------------ NumberTheory ------------------------------

const int isprimeflag_limit = 1e8;
static bitset<isprimeflag_limit> isprimeflag;
vector<int> primeNumbers;

vector<int> sieve(int n)
{
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

int32_t main()
{
    int limit = 1e7;
    sieve(limit);

    int n;
    cin >> n;

    vector<int> arr[n + 1];

    for (auto i : primeNumbers)
    {

        if (i > n)
            break;
        for (int j = i; j <= n; j += i)
        {
            int n = j;
            while (n % i == 0)
            {
                arr[j].push_back(i);
                n /= i;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " :  ";
        for (auto j : arr[i])
        {
            cout << j << " ";
        }
        cout << nl;
    }

    CRACKED;
}