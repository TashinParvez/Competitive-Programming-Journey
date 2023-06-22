#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        float n,x,y,a,b;
        scanf("%f%f%f%f%f",&n,&x,&y,&a,&b);

        float pCost = n/a*x;
        float dCost = n/b*y;

        if(pCost<dCost)
        {
            printf("PETROL\n");
        }
        else if(pCost>dCost)
        {
            printf("DIESEL\n");
        }
        else
        {
            printf("ANY\n");
        }
    }

    return 0;
}
