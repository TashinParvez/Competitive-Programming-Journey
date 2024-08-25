#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define int long long
#define null NULL
#define sp " " // space
#define len(s) s.length()
#define tashin cout << "____Tashin____" << nl;                  // Pointer
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code
using namespace std;

//--------------------------------------------------------------------------------------------------
vector<int> sieve(int n)
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

vector<int> getDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
                divisors.push_back(n / i);
        }
    return divisors;
}

int NOD(int n, vector<int> primes)
{
    int nod = 1;

    for (auto i : primes)
    {
        if (i * i > n)
            break;

        if (n % i == 0)
        {
            int cnt = 1; // for 0
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }

            nod *= cnt;
        }
    }

    if (n > 1)
    {
        nod *= 2;
    }
    return nod;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> arr = sieve(1e6);

    cout << NOD(n, arr) << nl;

    CRACKED;
}
