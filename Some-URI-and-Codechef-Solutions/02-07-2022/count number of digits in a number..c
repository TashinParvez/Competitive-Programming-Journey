#include<stdio.h>
int main()
{
    int a,count=0;
    scanf("%d",&a);

    for(int i=1; i<i+1; i++)
    {
        if(a>=10)
        {
            count+=1;
        }
        a = a/10;
        if(a<10)
        {
            count+=1;
            break;
        }
    }

    printf("%d",count);

    return 0;
}
