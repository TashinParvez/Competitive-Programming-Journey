
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include   <bits/stdc++.h>
#define    CRACKED        return 0;
#define    nl             endl
#define    int            long long
#define    setDec(x)      fixed << setprecision(x) 
#define    tashin         cout << "____Tashin____" << nl;
#define    dbg(x)         cerr << #x << " = " << (x) << endl;
using      namespace      std;

template <typename T> int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

int findPow(int a, int b){
    int ans = 1;
    for (int i = 1; i <= b; i++)
        ans *= a;
    return ans;
}

int32_t main()
{   
    int a  , b ;
    cin>>a>>b;
    cout << findPow(a, b) << nl;

    CRACKED;
}
