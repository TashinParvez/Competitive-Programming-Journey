#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,m;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d",&n,&m);

        m=m-n;

        if(m%2==0)
            printf("Janmansh\n");
        else
            printf("Jay\n");
    }





    return 0;
}

