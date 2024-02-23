#include<bits/stdc++.h>
const int N=2e5+10;int w[N];
int main(){int t;scanf("%d",&t);for(int i=1;i<N;i++){w[i]=w[i-1];for(int o=i;o;o/=10)w[i]+=o%10;}
while(t--){int n;scanf("%d",&n);printf("%d\n",w[n]);}return 0;}