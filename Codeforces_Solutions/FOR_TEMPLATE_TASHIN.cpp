#include <bits/stdc++.h>
using namespace std;
//------------------------------------------   --------------------------------


//  1 . arraysort
//  2. reverse sort

#define printarray(arr, len)    for (int i = 0; i < len; i++)  cout << a[i] << " "; cout << endl; // array print
#define end     return;

//------------------------------------------ FOR --------------------------------

#define FORN(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD(i, n) for (int i = (int)(n)-1; i >= 0; i--)


#define fora(I, n) for (int I = 0; I < n; i++)
/*
fora(i,n){
        int temp;
        cin>>temp;
        sum+=temp;
    }
*/

#define fr(i, n)           for (ll i=0;i<n;i++)
#define fr1(i, n)          for(ll i=1;i<=n;i++)



#define     take_the_array_INT(x,o,n)       for(int i=o;i<=n;i++){scanf("%d",&x[i]);}
#define     take_the_array_LL(x,o,n)        for(int i=o;i<=n;i++){scanf("%lld",&x[i]);}
#define     take_the_array_DBL(x,o,n)       for(int i=o;i<=n;i++){scanf("%lf",&x[i]);}
#define     print_the_array_INT(x,o,n)      for(int i=o;i<=n;i++){printf("%d ",x[i]);}printf("\n");
#define     print_the_array_LL(x,o,n)       for(int i=o;i<=n;i++){printf("%lld ",x[i]);}printf("\n");
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;


#define printa(a,L,R)   for(int i=L;i<R;i++) cout<<a[i]<<(i==R-1?'\n':' ')
#define printv(a)       printa(a,0,a.size())




#define sf(a)           scanf("%d",&a)
#define sfl(a)          scanf("%lld",&a)
#define sfc(a)          scanf("%c",&a)
#define sff(a,b)        scanf("%d %d",&a,&b)
#define sffl(a,b)       scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)     scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)    scanf("%lld %lld %lld",&a,&b,&c)



//------------------------------------------ template --------------------------------
#define pii pair<int, int>
#define pll pair<ll, ll>

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cout << '{';
    __print(x.first);
    cout << ',';
    __print(x.second);
    cout << '}';
}

template <typename T>
void __print(const T &x)
{
    int f = 0;
    cout << '{';
    for (auto &i : x)
        cout << (f++ ? "," : ""), __print(i);
    cout << "}";
}

void _print() { cout << "]\n"; }

template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cout << ", ";
    _print(v...);
}