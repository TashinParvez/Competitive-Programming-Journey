/*
 *        Author :  Tashin.Parvez
 *    United International University
 *          Created: 27.08.2024
 */

#include <bits/stdc++.h>
#define faster           ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CRACKED          return 0;
#define nl               "\n"
using   namespace        std;
#define newline          cout << nl;
#define int              long long
#define ll               long long
#define ull              unsigned long long
#define ld               long double
#define minusone         -1
#define sp                     " "
#define output(x)              cout << x << nl
#define setdec(x)              fixed << setprecision(x)


vector<int> primeNumbers;
vector<int> sieve(int n)
{
    const int isprimeflag_limit = 1e8;
    static bitset<isprimeflag_limit> isprimeflag;
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
int SOD(int n, vector<int>& primeNumbers) { int sod = 1; for (auto i : primeNumbers) { if (i * i > n) break; if (n % i == 0) { int isum = 1, icntSum = 1; while (n % i == 0) icntSum *= i, isum += icntSum, n /= i; sod *= isum; } } if (n > 1) sod *= (n + 1); return sod; }

int32_t main()
{
    faster;

    int t = 1;

    sieve(1e6);

    cin >> t;
    int c = 1;

    while (t--)
    {
        int x;
        cin >> x;

        cout<<SOD(x,primeNumbers)-x<<nl;
    }

    CRACKED;
}