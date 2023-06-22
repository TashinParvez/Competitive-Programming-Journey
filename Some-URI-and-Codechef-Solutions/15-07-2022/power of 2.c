#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    int i=1,power;

    while(i<T)
    {
        power = pow(2,i);

        if(power==T)
        {
            power=-1;
            break;
        }

        i++;
    }

    if(power<0)
        printf("Yes\n");
    else
        printf("No\n");


    return 0;
}

