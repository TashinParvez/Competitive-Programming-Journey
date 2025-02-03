
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define int long long
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define tashin cout << "____Tashin____" << nl;                  // Pointer
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code
using namespace std;
//--------------------------------------------------------------------------------------------------
vector<int> sieve(int n) // my temp sieve Function
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
//--------------------------------------------------------------------------------------------------

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

int32_t main()
{
    int limit = 1e6;
    // cout << "Enter Limit: ";
    cin >> limit;

    vector<int> primeNumbers = sieve(limit);
    cout << "Normal Method :" << nl;
    for (auto i : primeNumbers)
    {
        cout << i << " ";
    }

    primeNumbers = sieve(limit);
    cout << nl << "Optimized Method :" << nl;
    for (auto i : primeNumbers)
    {
        cout << i << " ";
    }

    CRACKED;
}
