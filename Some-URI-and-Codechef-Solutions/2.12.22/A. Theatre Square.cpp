#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    scanf("%d%d%d",&n,&m,&a);

    int height = (int)ceil(n/(double)a);
    int side = (int)ceil(m/(double)a);

    unsigned long long int l = height*side;

    cout<<l<<endl;
    return 0;
}

