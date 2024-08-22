//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code

using namespace std;

/**********************************************************/

vector<int> sieve(int n)
{
    const int idx = 1e8;
    bitset<idx> isprime;
    vector<int> primeNumbers;
    
    if (n == 1 || n <= 0)
        return primeNumbers;

    for (int i = 3; i <= n; i += 2)
        isprime[i] = 1;
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
        if (isprime[i])
            for (int j = i * i; j <= n; j += i)
                isprime[j] = 0;
    primeNumbers.push_back(2);
    for (int i = 3; i <= n; i += 2)
        if (isprime[i])
            primeNumbers.push_back(i);
    return primeNumbers;
}

class Solution
{
public:
    int countPrimes(int n)
    {
        vector<int> primes = sieve(n - 1);
        return primes.size();
    }
};