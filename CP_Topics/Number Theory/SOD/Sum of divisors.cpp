#include <bits/stdc++.h>
#define    CRACKED        return 0;
#define    nl             endl                                                    // NewLine
#define    int            long long
#define    null           NULL
#define    sp             " "                                                   // space
#define    setDec(x)      fixed << setprecision(x) 
#define    len(s)         s.length()
#define    tashin         cout << "____Tashin____" << nl;                       // Pointer
#define    deb(n)         cout << "Tashin   " << #n << " = " << n << endl;    // debug code
#define    debt           cout << "Tashin   " << endl;                          // debug code

using  namespace std;
 
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

//--------------------------------------------------------------------------------------------------
//for template:    int SOD(int n, vector<int>& primeNumbers) { int sod = 1; for (auto i : primeNumbers) { if (i * i > n) break; if (n % i == 0) { int isum = 1, icntSum = 1; while (n % i == 0) icntSum *= i, isum += icntSum, n /= i; sod *= isum; } } if (n > 1) sod *= (n + 1); return sod; }

int SOD(int n, vector<int> &primeNumbers)
{
    int sod = 1;

    for (auto i : primeNumbers)
    {
        if (i * i > n)
            break;
        if (n % i == 0)
        {
            int isum = 1;
            int icntSum = 1;

            while (n % i == 0)
            {
                icntSum *= i;
                isum += icntSum;
                n /= i;
            }
            sod *= isum;
        }
    }

    if (n > 1)
    {
        sod *= (n + 1);
    }
    return sod;
}

int32_t main()
{
    vector<int> primes = sieve(1e6);

    cout<<  SOD(84, primes) <<nl;
     
    CRACKED;
}
