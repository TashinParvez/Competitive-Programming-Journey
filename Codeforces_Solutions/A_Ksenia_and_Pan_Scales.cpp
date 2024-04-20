#include<bits/stdc++.h>
using namespace std;

#define     w(t);                   int t;cin >> t; while(t--){solve();}
#define     fri(n)                  for(int i=0;i<n;i++)
#define     frl(n)                  for(long long i=0;i<n;i++)
#define     ll                      long long
#define     sp                      " "
#define     vsort(v)                sort(v.begin(),v.end())
#define     vsort_rev(v)            sort(v.begin(),v.end(), greater<int>())
#define     pb(c)                   push_back(i)
#define     br                      cout << "\n";
#define     nl                      "\n"
#define     prints(v)               for(auto u:v)cout << u << sp;
#define     print(v)                for(auto u:v)cout << u ;
#define     mod                     1000000007
#define     inf                     (ll)1e9
typedef     pair<int,int> pii;
typedef     set<int> st;
#define     fastio()      (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));



void solve(){
  string s,w,l,r; cin>>s>>w;
  int c=0,l_size,r_size,w_size;
  fri(s.length()){
    if(s[i]=='|'){c=1; continue;}
    if(c==0)l+=s[i];
    else r+=s[i];
  }
  l_size=l.length();
  r_size=r.length();
  w_size=w.length();
  if((w_size-abs(l_size-r_size))<0 or (w_size-abs(l_size-r_size))%2!=0){
        cout<<"Impossible"<<nl; return;
  }
  int t=(l_size+r_size+w_size)/2, count=0;
  cout<<l;
  while(l_size!=t){
    cout<<w[count];
    count++;
    l_size++;
  }
  cout<<"|"<<r;
  while(r_size!=t){
    cout<<w[count];
    count++;
    r_size++;
  }
}




int main()
{
  fastio();
  solve();
}
