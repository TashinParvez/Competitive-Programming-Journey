#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);

        if(n>30)
        printf("Yes\n");
        else{
        printf("No\n");
        }
    }
    return 0;
}

