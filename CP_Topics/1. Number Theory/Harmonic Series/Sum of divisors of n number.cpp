
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
const int idx = 1e7;
int arr[idx + 2];
vector<int> divisors[idx + 2]; //********* it will work up to 10e6 *********

int32_t main()
{
    int limit = 1e6;
    cin >> limit;

    for (int i = 1; i <= limit; i++)
    {
        for (int j = i; j <= limit; j += i)
        {
            arr[j] += i;
        }
    }

    cout << "Sum of Divisors : " << nl;

    for (int i = 1; i <= limit; i++)
    {
        cout << i << " -> ";
        cout << arr[i] << nl;
    }

    CRACKED;
}
