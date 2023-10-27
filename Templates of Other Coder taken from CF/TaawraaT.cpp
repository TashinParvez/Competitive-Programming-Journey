#include   <bits/stdc++.h>
#include   <ext/pb_ds/assoc_container.hpp>
#include   <ext/pb_ds/tree_policy.hpp>

#define    nline        cout << '\n' 
#define    lastof(s)    s.size() - 1
#define    all(x)       x.begin(), x.end()
#define    rall(x)      x.rbegin(), x.rend()
#define    pb           push_back
#define    mp           make_pair
#define    EPS          1e-5
#define    pdd          pair<double,double>

typedef    unsigned     long long ull;
typedef    long long    ll;
using      namespace    std;
using      namespace    __gnu_pbds;

typedef    tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> o_setL; 
typedef    tree<long long, null_type, greater<long long>, rb_tree_tag, tree_order_statistics_node_update> o_setG; 
typedef    tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> multi_o_setL; 
typedef    tree<long long, null_type, greater_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> multi_o_setG; 
typedef    tree<pair<long long, long long>, null_type, less<pair<long long, long long>>, rb_tree_tag, tree_order_statistics_node_update> o_setP; 


void OJ(){
    #ifdef TAWRAT
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w+", stdout);
    #endif
}
    
#ifndef ONLINE_JUDGE

auto debug(){ return cout << endl,0; }
template<typename Arg,typename... Args>
auto debug(Arg elem,Args... elems){
    cout << "debugging: " << elem << ' ';
    // cout << endl;
    return debug(elems...);
}
    
template<typename T>
void printVec(T& v){
    cout << "container : [ ";
    for(auto &it: v) cout << it << ' ';
    cout << "]\n";
}
    
#endif
    
const ll mod = 1000000000+7;
const ll maxN = 1000000+10;
    
ll bigMod(ll a, ll b, ll m){
    ll ans = 1;
    a = a % m;
    
    while(b){
        if(b & 1)
            ans = (ans * a) % m;
        
        a = (a*a) % m;
        b /= 2;
    }
    return ans;
}
    
ll   MOD(ll num){ return ((num%mod + mod)%mod); }
  
ll   MOD(ll num, ll mod){ return ((num%mod + mod)%mod); }
  
ll   modAdd(ll a, ll b){ return MOD(MOD(a) + MOD(b)); }
    
ll   modSub(ll a, ll b){ return MOD(MOD(a) - MOD(b)); }
  
ll   modMul(ll a, ll b){ return MOD(MOD(a) * MOD(b)); }
    
ll   modDiv(ll a, ll b){ return modMul(a, bigMod(b,mod-2, mod)); }
    
ll   Lcm(ll x, ll y) { return x * y / __gcd(x, y); }
    
ll   Sum(ll n) { return (n * (n + 1)) / 2; }

ll   logAB(ll a, ll b) { return log(a) / log(b); }
    
ll   ceilAB(ll a, ll b) { return (a + b - 1) / b; }

ll   ceilNegAB(ll a, ll b) { return (a - b + 1) / b; }
    
ll   chartoint(char ch) { return ch - '0'; }

bool isPowerOfTwo(ll n) { return n > 0 && !(n&(n-1)); }

bool coPrime(ll a, ll b) { return __gcd(a,b) == 1; }
    
bool isEqual(double a, double b) { return abs(a-b) < EPS; }
    
bool isGreater(double a, double b) { return a >= b + EPS; }
    
bool isGreaterEqual(double a, double b) { return a > b - EPS; }

void solve(){
    int n; cin >> n;

    map<int, int> mpp;

    char mark[10000] = {};
    int val, mx = -1;

    for(int i = 0; i < n; i++){
        cin >> val;
        mx = max(mx, val);
        mpp[val]++;
    }

    int cnt;

    for(int i = 2; i <= 10000; i++){
        if(!mark[i]){
            cnt = 0;
            for(int j = i; j <= mx; j += i){
                mark[j] = true;
                cnt += mpp[j];

                if(cnt >= 2){
                    cout << "YES";
                    return;
                }
            }
        }
    }

    cout << "NO";
}

void TC(){
    int Case = 0;
    int t = 1;
    cin >> t;

    while(t--){
        // cout << "Case #" << ++Case << ": ";
        solve();
        cout << '\n';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    OJ();
        
    // Start
    TC();
}