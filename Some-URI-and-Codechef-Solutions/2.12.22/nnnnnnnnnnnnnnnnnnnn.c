#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[10],c[10],n;
        scanf("%d",&n);
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            c[j]=a[j];
        }

        sort(a, a + n);

        for(int i=0; i<n; i++)
        {
            if(c[i]!=a[n-1])
                printf("%d ",c[i]-a[n-1]);
            else
                printf("%d ",c[i]-a[n-2]);
        }
        printf("\n");
    }
    return 0;
}
