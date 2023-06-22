#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;

    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n);

        if(n>20)
            printf("Hot\n");
        else
            printf("Cold\n");
    }

    return 0;
}

