#include<stdio.h>
int main()
{
    int n,r,p;
    scanf("%d%d",&n,&r);
    while(n--)
    {
        scanf("%d",&p);

        if(p>=r)
            printf("Good boi\n");
        else
            printf("Bad boi\n");

    }
    return 0;
}

