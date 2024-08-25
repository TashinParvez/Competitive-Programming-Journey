/** Bismillah Hir Rahman Nir Raheem **/
#include<bits/stdc++.h>
#define   ll              long long int
#define   ull             unsigned long long int

#define   tst             int t;cin>>t;while(t--)

#define   pb              push_back
#define   vc              vector
#define   vs              vc<string>
#define   vi              vc<int>
#define   vl              vc<ll>

#define   pii             pair<int,int>
#define   pll             pair<ll,ll>

#define   F               first
#define   S               second

#define   PI              2*acos(0.0)

#define   rsrt(v)         sort(v.rbegin(),v.rend());

#define   all(v)          v.begin(),v.end()
#define   pf(x)           cout<<x<<endl;
#define   yes             cout<<"YES"<<endl;
#define   no              cout<<"NO"<<endl;

#define   ms(x,n)         memset(x,n,sizeof(x));
#define   srt(v)          sort(v.begin(),v.end());
#define   rvs(v)          reverse(v.begin(),v.end());
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   cs(x)           cout<<"Case "<<x<<": ";
#define   nn              '\n'
#define   coutv(v)        for(auto it:v)cout<<it<<' ';cout<<endl;
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   mod             1000000007
using namespace std;

///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///king's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///=============== Debugging ============================///
void __print(int x)
{
    cout << x;
}
void __print(long x)
{
    cout << x;
}
void __print(long long x)
{
    cout << x;
}
void __print(unsigned x)
{
    cout << x;
}
void __print(unsigned long x)
{
    cout << x;
}
void __print(unsigned long long x)
{
    cout << x;
}
void __print(float x)
{
    cout << x;
}
void __print(double x)
{
    cout << x;
}
void __print(long double x)
{
    cout << x;
}
void __print(char x)
{
    cout << '\'' << x << '\'';
}
void __print(const char *x)
{
    cout << '\"' << x << '\"';
}
void __print(const string &x)
{
    cout << '\"' << x << '\"';
}
void __print(bool x)
{
    cout << (x ? "true" : "false");
}

template<typename T, typename V>
void __print(const pair<T, V> &x)
{
    cout << '{';
    __print(x.first);
    cout << ',';
    __print(x.second);
    cout << '}';
}
template<typename T>
void __print(const T &x)
{
    int f = 0;
    cout << '{';
    for (auto &i: x) cout << (f++ ? "," : ""), __print(i);
    cout << "}";
}
void _print()
{
    cout << "]\n";
}
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v)) cout << ", ";
    _print(v...);
}

#ifndef ONLINE_JUDGE
#define debug(x...) cout << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
///=============================================///


// for randome number 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
    return uniform_int_distribution<int>(l, r) (rng);
}



const int N = 2e5+10;

char ch[3][N];

int main()
{ 
    return 0;
}

