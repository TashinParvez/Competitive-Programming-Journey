#include<stdio.h>
int main()
{

    int T;
    scanf("%d",&T);
    int n;
    for(int i=1; i<=T; i++)
    {
        scanf("%d",&n);

        if(n>=7)
            printf("Yes\n");
        else if(n%2==0)
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}

