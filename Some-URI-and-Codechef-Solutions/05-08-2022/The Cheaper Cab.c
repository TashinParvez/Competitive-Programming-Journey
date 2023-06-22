#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n,nn;
        scanf("%d%d",&n,&nn);
        if(nn>n)
            printf("First\n");
        else if(nn==n)
            printf("Any\n");
        else
            printf("Second\n");
    }

    return 0;
}

