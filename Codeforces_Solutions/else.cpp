

//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code

using namespace std;






const int k = 1000;
int store[k] = {-1};

int Catalan(int n)
{
    if (n == 0)
        return 1;
    else if (store[n] != -1)
    {
        return store[n];
    }
    else
    {
        int c = 0;

        for (int i = 0; i <= n - 1; i++)
        {
            int friend_1 = Catalan(i);
            store[i] = friend_1;
            int friend_2 = Catalan(n - i - 1);
            store[n - i - 1] = friend_2;

            c += friend_1 + friend_2;
        }
        return c;
    }
}












int32_t main()
{

    CRACKED;
}
