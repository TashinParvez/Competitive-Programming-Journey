//https://codeforces.com/contest/1884/problem/B
#include <bits/stdc++.h>
#if 0
#define HOME
#endif
#ifndef ONLINE_JUDGE
#define dbgA2(A, n, m)  {cout<<"-->"<<#A<<"=\n";for(int i = 0; i < n; i++){for(int j = 0; j < m; j++){cout<<A[i][j]<<" ";}cout<<"\n";}cout<<"\n";}
#define dbgA(A, n)      {cout<<"-->"<<#A<<"=(";for(int i = 0; i < n; i++)cout<<A[i]<<" ";cout<<")\n";}
#define dbg(args...)    {string sss(#args);sss+=',';cout<<"-->";debugger::call(sss.begin(), sss.end(), args);cout<<"\n";}
#else
#define dbgA2(A, n, m)
#define dbgA(A, n)
#define dbg(args...)
#endif

#define fora(I,n) for(int I=0; I<n;I++)
#define forb(I,n) for(int I=1; I<=n;I++)

#define mXI (int)1e8
#define umXI UINT_MAX
#define llmXI LLONG_MAX

#define pb push_back

#define ll long long
#define pll pair<ll,ll>
#define pii pair<int,int>
#define mkp(a,b) make_pair(a,b)

using namespace std;
struct debugger {
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest) {
        string b;
        for(; *it!=','; ++it)
            if(*it!=' ')
                b+=*it;
        cout << b << "=" << a << " ";
        call(++it, ed, rest...);
    }
};

void run(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        vector<ll> a,b;
        vector<ll> csuma,csumb;
        csuma.pb(0),csumb.pb(0);
        for(int i=0;i<n;i++){
            if(s[i]=='0') a.pb(i);
            else b.pb(i);
        }
        for(int i=0;i<a.size();i++){
            csuma.pb(csuma.back()+a[i]);
        }
        for(int i=0;i<b.size();i++){
            csumb.pb(csumb.back()+b[i]);
        }
        vector<ll> ans(n+1);
        for(int i=1;i<=n;i++){
            ll count=upper_bound(b.begin(),b.end(),i-1)-b.begin();
            ll start=(int)(lower_bound(a.begin(),a.end(),i)-a.begin());
            ll left=a.size()-start;
            // dbg(left,start,count,i);
            if(count>n-i || count>left){
                ans[i]=-1;
            }else if(count==0){
                ans[i]=0;
            }else{
                ans[i]=csuma[start+count]-csuma[start]-csumb[count];
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }
}

int main() {
#ifdef HOME
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    run();
}
