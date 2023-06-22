#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    for(int i=1; i<=t; i++)
    {
        int total=1;
        scanf("%d",&n);

        for(int j=1;j<=n;j++){
            total=total*j;

        }
        printf("%d\n",total);

    }
    return 0;
}




