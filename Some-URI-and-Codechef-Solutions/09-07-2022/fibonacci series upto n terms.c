#include<stdio.h>
int main()
{

    int num;
    scanf("%d",&num);
    int be1;
    int    be2,sum=0;
    for(int i=0; i<num; i++)
    {
        if(i==0)
        {
            printf("0, ");
            be1=i;
        }
        else if(i==1)
        {

            printf("1, ");
            be2=i;
        }
        else
        {
            sum=be1+be2;
            printf("%d, ",sum);
            be1=be2;
            be2=sum;
        }
    }

    return 0;
}
