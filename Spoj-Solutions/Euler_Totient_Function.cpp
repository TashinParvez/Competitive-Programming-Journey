
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include   <bits/stdc++.h>
#define    CRACKED        return 0;
#define    nl             endl
#define    int            long long
#define    setDec(x)      fixed << setprecision(x) 
#define    tashin         cout << "____Tashin____" << nl;
#define    deb(n)         cout << "Tashin   " << #n << " = " << n << endl;
#define    debt           cout << "Tashin   " << endl;
  using    namespace      std;

template <typename T> int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

//------------------------------ NumberTheory ------------------------------

#define   lcm(a, b)              (a * (b / __gcd(a,b)) )
#define   gcd(a, b)              __gcd(a,b) 

vector<int>   sieve(int n)                                   { const int isprimeflag_limit = 1e8; static bitset<isprimeflag_limit> isprimeflag; vector<int> primeNumbers; if (n == 1 || n <= 0) return primeNumbers; for (int i = 3; i <= n; i += 2) isprimeflag[i] = 1; isprimeflag[2]=1; int sq = sqrt(n); for (int i = 3; i <= sq; i += 2) if (isprimeflag[i]) for (int j = i * i; j <= n; j += i) isprimeflag[j] = 0; primeNumbers.push_back(2); for (int i = 3; i <= n; i += 2) if (isprimeflag[i]) primeNumbers.push_back(i); return primeNumbers; }
int           eulerPhi(int n, vector<int> &primeNumbers)     { int phi = n; for (auto i : primeNumbers) { if (i * i > n) break; if (n % i == 0) { while (n % i == 0) n /= i; phi /= i; phi *= (i - 1); } } if (n > 1) { phi /= n; phi *= (n - 1); } return phi; }


int32_t main()
{
    int t;
    cin >> t;
    vector<int> arr = sieve(1e3 + 100);
    while (t--)
    {
        int n;
        cin >> n;
        cout << eulerPhi(n, arr) << nl;
    }

    CRACKED;
}
