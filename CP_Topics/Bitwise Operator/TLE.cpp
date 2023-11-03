
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************
//        https://www.youtube.com/watch?v=LGrE0siZ-ZA&list=WL&index=3

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
using namespace std;

bool evenOdd(int n) //  Odd = 0   &&   Even = 1  /// O(1)
{
    if (!(n & 1)) // Formula:  EVEN  (for even --->> i&1 == 0)
                  // take last bit check it 1 or Not
        return 1;
    else
        return 0;
}

bool isPowerof_2(int x) /// O(1)
{

    if (x == 0) ///---- corner case
        return 0;

    return !(x & (x - 1));
    /*
    if x is prime it will return 1; // catually (x & x-1) ==0 means x is power of 2

    x = 16     bin(16) = 2^4 =    1 0 0 0 0
    x = 15     bin(15)       =    0 1 1 1 1
              ------------------------------
                             =    0 0 0 0 0 ( So x is a power of 2 )


    x = 15     bin(15)       =    0 1 1 1 1
    x = 16     bin(14)       =    0 1 1 1 0
              ------------------------------
                            =     0 0 0 0 0 ( So x is NOT a power of 2 )
    */
}

///
/***************************** Play with Kth Bit of a number ******************************************************/

bool knowKthBitOfaNumber(int num, int bitNo)
{
    //      x =       1 0 0 1 0 0 1
    //      Bit-No    8 6 5 4 3 2 1    ( last bit = 1st Bit)

    int power = pow(2, bitNo - 1); //  logN
    return (num & power);          //  return 0 = bis is 0      // O(1)
    ///                                return > 0  = bit is 1
}

int toggletheKthBitOfaNumber(int num, int bitNo)
{
    //      x =       1 0 0 1 0 0 1
    //      Bit-No    8 6 5 4 3 2 1   ( last bit = 1st Bit)

    int power = pow(2, bitNo - 1); //  logN
    return (num ^ power);          //  return 0 = bis is 0      // O(1)
}

int32_t main()
{
    int x;
    x = 16;

    // int k = pow(2, 4);
    // cout << toggletheKthBitOfaNumber(16, 1) << nl;
    int k = 2;
    
    k = k>>1;  // right shift
    k = k>>1;  // lrft  shift

    cout <<   k  << nl;

    CRACKED;
}
