
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
  //--------------------------------- FOR --------------------------------
  #define FOR_OVERLOAD(_1, _2, _3, NAME, ...) NAME
  #define FOR(...)                 FOR_OVERLOAD(__VA_ARGS__, FOR_THREE_ARGS, FOR_TWO_ARGS, FOR_ONE_ARG)(__VA_ARGS__)
  
  #define FOR_ONE_ARG(n)           for(int i = 0; i < (n); i++)
  #define FOR_TWO_ARGS(a, b)       for(int i = (a); (a) <= (b) ? (i < (b)) : (i > (b)); (a) <= (b) ? ++i : --i)
  #define FOR_THREE_ARGS(a, b, c)  for(int i = (a); (c) > 0 ? (i < (b)) : (i > (b)); i += (c))
  
  #define FORJ(n)                  for (int j = 0; j < (n); j++)
  #define FORK(n)                  for (int k = 0; k < (n); k++) 
  

template <typename T> int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

int32_t main()
{   
    int n;cin>>n;

    int presum[n+1] ;
    int sufsum[n+1];
    int l , r;cin>>l>>r;

    int temp = 0;
    FOR(1, n + 1)
    {
        temp ^= i;
        presum[i] = temp;
    }

    temp = 0;
    FOR(n, 0)
    {
        temp ^= i; 
        sufsum[i] = temp;
    }

    int actualans = 0;
    FOR(l, r + 1)
    {
        cout << i << " ";
        actualans ^= i;
    }
    cout << nl;

    cout<<actualans<<nl;
    cout<< (presum[r] ^ presum[l-1])   <<nl;



    CRACKED;
}
