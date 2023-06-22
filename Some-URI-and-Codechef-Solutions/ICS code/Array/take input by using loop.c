#include<stdio.h>
int main()
{
    int Num[5];
    printf("Enter 5 real Numbers\n");

    for(int i=0; i<=4; i++)  // taking inputs
    {
        scanf("%d",&Num[i]);
    }

    for(int i=0; i<=4; i++)  // printing outputs
    {
        printf("%d ",Num[i]);
    }
    return 0;
}
