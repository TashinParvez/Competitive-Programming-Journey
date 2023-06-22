#include<stdio.h>
int main()
{
    int x;

    int total=0;
    int i;
    for(i=1; i<i+1; i++)
    {
        scanf("%d",&x);
        if(x<0)
        {
            i=i-1;
            break;
        }
        total=total+x;

    }
    float avg=(float)total/i;

    printf("%.2f\n",avg);


    return 0;
}

