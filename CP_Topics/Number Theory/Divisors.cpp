//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    18-08-23     *************************\
// https://www.youtube.com/watch?v=x9KMLQa6G5w
// https://progkriya.org/gyan/basic-number-theory
// https://drive.google.com/file/d/1eqbWJPXg0h7MuRkjhmeHV5r0pLsLOnBX/view

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
using namespace std;

int32_t main()
{
    /* Brute force*/
    // find and count divisor
    cout << nl;
    // int n = 24;
    int n = 36;
    int count = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) // O(n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            count++;
            sum += i;
        }
    }
    cout << "\nTotal divisor " << count << nl;
    cout << "Sum divisor " << sum << nl << nl;
    count = 0;
    sum = 0;

    /*Optimized*/                      // worked for any code
    for (int i = 1; i <= sqrt(n); i++) // square root n  //  O(squareRoot N)
    // for (int i = 1; i*1 <= n; i++)  // another way
    {
        if (n % i == 0)
        {
            cout << i << " ";
            count++;
            sum += i;
            if (i != n / i)
            {
                cout << n / i << " ";
                count++;
                sum += n / i;
            }
        }
    }
    cout << "\nTotal divisor " << count << nl;
    cout << "Sum divisor " << sum << nl << nl;

    /*More Optimized*/

    CRACKED;
}
