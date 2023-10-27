#include<bits/stdc++.h>
 
using namespace std;
 
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long int ll;
typedef pair<ll,ll> pi;
typedef long double ld;

const double PI = 2.0*acos(0.0); //acos(-1.0);
const double EPS = 1e-9;
const int inf = 2000000000;
const ll INF = 9000000000000000000;
#define MOD 1000000007

#define pb push_back
#define FF first
#define SS second

#define endl '\n'

#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()

#define sz(a) (ll)a.size()
#define mx_int_prime 999999937

#define sin(a)  sin(a*PI/180)
#define sini(a) asin(a)/(PI/180) 

#define mset(pq,v) memset(pq,v,sizeof(pq));
#define sp ' '

#define LB lower_bound
#define UB upper_bound

#define CY cout<<"YES\n";
#define CN cout<<"NO\n";
#define CYR cout<<"YES\n";return;
#define CNR cout<<"NO\n";return;

#define endl '\n'

ll reverse_num(ll n){ ll tmp=n,ans=0,r;while(tmp){r=tmp%10;ans=ans*10+r;tmp/=10;}return ans;}
ll gcd(ll num1, ll num2) { ll a,b,r; a=num1; b=num2; r=a%b; while(r>0){ a=b; b=r; r=a%b; } return b; }
ll lcm(ll num1, ll num2) { return (num1*num2)/gcd(num1, num2); }
bool isprime(ll n) { if(n<2) return false; for(ll i=2;i<=sqrt(n);i++){ if(n%i==0)return false;} return true; }
bool isSquare(ll x){ll sq=sqrt(x);return sq*sq==x;}
ll mod_inverse(ll a, ll p, ll m){ ll r=1;while(p){if(p%2)r=((r%m)*(a%m))%m;a=((a%m)*(a%m))%m;p/=2;}return r;}
ll POW(ll a,ll b){if(!b) return 1;ll r=POW(a,b/2);if(b%2) return r*r*a;else return r*r;}
ll LOG2(ll n){ll v=1,c=0;while(v<=n)c++,v*=2;return c-1;}
ll LOGX(ll x,ll n){ll v=1,c=0;while(v<=n)c++,v*=x;return c-1;}
string int_to_str(ll x){string s;while(x){s+=(char)(x%10)+'0';x/=10;}reverse(all(s));return s;}
ll str_to_int(string s){istringstream ss(s);ll n;ss>>n;return n;}
vector<ll> sieve(int n) {int*arr=new int[n+1]();vector<ll>v;for(int i=2;i<=n;i++)if(!arr[i]){v.pb(i);for(int j=2*i; j<=n; j+=i)arr[j]=1;} return v;} // vector<ll>primes=sieve(100000);
ll ceil(ll a, ll b){return (a+b-1)/b;}

ll dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
ll dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};

template < typename F, typename S >ostream& operator << ( ostream& os, const pair< F, S > & p ) {return os << "(" << p.first << ", " << p.second << ")";}
template < typename T >ostream &operator << ( ostream & os, const vector< T > &v ) {os << "{";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << *it;}return os << "}";}
template < typename T >ostream &operator << ( ostream & os, const set< T > &v ) {os << "[";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << *it;}return os << "]";}
template < typename T >ostream &operator << ( ostream & os, const multiset< T > &v ) {os << "[";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << *it;}return os << "]";}
template < typename F, typename S >ostream &operator << ( ostream & os, const map< F, S > &v ) {os << "[";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << it -> first << " = " << it -> second ;}return os << "]";}

#define dbg(args...) do {cerr << #args << " : "; arif(args); } while(0)
clock_t tStart = clock();
#define timeStamp dbg("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
void arif () {cerr << endl;}
template <typename T>void arif( T a[], int n ) {for(int i = 0; i < n; ++i) cerr << a[i] << ' ';cerr << endl;}
template <typename T, typename ... hello>void arif( T arg, const hello &... rest) {cerr << arg << ' ';arif(rest...);}

//get done with thinking, then move to coding. Don't cycle
void solve()
{
    ll n;
    cin >> n;
    map<ll, ll>mp;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        while(x % 2 == 0)
            x /= 2;
        mp[x]++;
    }
    ll flag = 1;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        while(!mp[x] && x)
            x /= 2;
        if(!x)flag = 0;
        else mp[x]--;
    }
    if(flag)CY 
    else CN
}

int main()
{
    FIO

    ll tc = 1;
    cin >> tc;
    for(ll t=1; t<=tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();   
    }

    return 0;
}