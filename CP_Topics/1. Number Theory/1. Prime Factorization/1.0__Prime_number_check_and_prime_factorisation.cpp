//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    18-08-23     *************************\
// https://www.youtube.com/watch?v=j8Y1fDgFnsI

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl  
using namespace std;

int main()
{

    /**********************  Number Prime or not check (Optimized)   O(n)->O(root n) *************************/
 
    int n;
    cin >> n;

    if (n == 1)
        cout << "1 Is Not a PRIME" << nl;
    else
        for (int i = 2; i <= sqrt(n); i++) //  O(Root N)
        // for (int i = 1; i*1 <= n; i++)  // another way 
        {
            if (n % i == 0)
            {
                break;
            }
        }

    //
    /************************ find all divisable prime numbers of a num *********************************/
 
    cin >> n;
    vector<int> primeFactors;

    for (int i = 2; i <= n; i++) // O(n)
    {
        while (n % i == 0)
        {
            primeFactors.push_back(i);
            n /= i;
        }
    }
    for (auto i : primeFactors)
    {
        cout << i << " ";
    }

    //
    /***************************************** (Otmized) ******************************************/
    /*
       See for every number there always exist a prime num with in root(n)
    */
 
    cin >> n;
    vector<int> primeFactors;

    for (int i = 2; i + i <= n; i++) // O(n)
    {
        while (n % i == 0)
        {
            primeFactors.push_back(i);
            n /= i;
        }
    }

    if (n > 1) // sometimes line 3,5,25,24 in these case, in last Quotient is a prime num so its own root n case there dont exixt any prime
        primeFactors.push_back(n);

    for (auto i : primeFactors)
    {
        cout << i << " ";
    }
 
    CRACKED;
}
