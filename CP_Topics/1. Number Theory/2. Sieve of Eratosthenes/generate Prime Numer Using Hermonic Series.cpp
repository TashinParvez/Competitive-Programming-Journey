
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
#define mem(a, b) memset(a, b, sizeof(a))

//--------------------------------------------------------------------------------------------------

vector<int> sieveNormal(int n) //======================= >>>  normal
{
    const int idx = 1e7;
    bitset<idx> isprime; // take less memory then bool/int

    vector<int> primeNumbers;

    isprime[0] = 0;
    isprime[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        isprime[i] = 1; // making all true  initially
    }


    for (int i = 2; i <= n; i++)
    {
        for (int j = i + i; j <= n; j += i)
        {
            isprime[j] = 0; // removing non prime
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isprime[i] == 1)
            primeNumbers.push_back(i);
    }

    return primeNumbers;
}


vector<int> sieveOptimized(int n) //======================= >>>  Optimised _ almost  O(n) == work upto 1e7
{
    const int idx = 1e7;
    bitset<idx> isprime; // take less memory then bool/int

    vector<int> primeNumbers;

    for (int i = 3; i <= n; i += 2)
    {
        isprime[i] = 1; // createing all prime true
    }

    isprime[2] = 1;

    int sq = sqrt(n);

    for (int i = 3; i <= sq; i += 2)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isprime[j] = 0; // removing non prime
            }
        }
    }

    // Collect prime numbers
    primeNumbers.push_back(2); // add 2 as prime

    for (int i = 3; i <= n; i += 2)
    {
        if (isprime[i] == 1)
            primeNumbers.push_back(i);
    }

    return primeNumbers;
}

int32_t main()       //-------------------  main func -------------------
{
    int limit = 1e6;
    // cout << "Enter Limit: ";

    cin >> limit; 


    vector<int> primeNumbers = sieveNormal(limit);

    cout << "Normal Method :" << nl;
    for (auto i : primeNumbers)
    {
        cout << i << " ";
    }

    primeNumbers = sieveOptimized(limit);

    cout << nl << "Optimized Method :" << nl;
    for (auto i : primeNumbers)
    {
        cout << i << " ";
    }

    CRACKED;
}
