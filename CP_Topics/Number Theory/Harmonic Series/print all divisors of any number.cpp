
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
//--------------------------------- FOR
#define FOR_OVERLOAD(_1, _2, NAME, ...) NAME
#define FOR(...) FOR_OVERLOAD(__VA_ARGS__, FOR_TWO_ARGS, FOR_ONE_ARG)(__VA_ARGS__)

#define FOR_ONE_ARG(n) for (int i = 0; i < (n); i++)
#define FOR_TWO_ARGS(a, b) for (int i = (a); (a) <= (b) ? (i < (b)) : (i > (b)); (a) <= (b) ? ++i : --i)

#define FORJ(n) for (int j = 0; j < (n); j++)
#define FORK(n) for (int k = 0; k < (n); k++)

//--------------------------------------------------------------------------------------------------
const int idx = 1e7;
int arr[idx + 2];
vector<int> divisors[idx + 2];  //********* it will work up to 10e6 *********

int32_t main()
{
    int limit = 1e6;
    cin >> limit;

    for (int i = 1; i <= limit; i++)
    {
        for (int j = i; j <= limit; j += i)
        {
            arr[j]++;
            divisors[j].push_back(i); // here
        }
    }

    FOR(1, limit + 1) // for print
    {
        cout << i << " -> ";
        for (auto j : divisors[i])
        {
            cout << j << " ";
        }
        cout << nl;
    }

    CRACKED;
}
