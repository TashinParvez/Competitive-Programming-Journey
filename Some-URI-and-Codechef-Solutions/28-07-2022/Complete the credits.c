#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;

    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n);

        if(n>65)
            printf("Overload\n");
        else if(n<35)
            printf("Underload\n");
        else
            printf("Normal\n");
    }





    return 0;
}

