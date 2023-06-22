#include<stdio.h>
int main()
{int j,i;
    for(i=1; i<=9; i=i+2)
    {
        for(j=7; j>=5; j=j-1)
        {
            printf("I=%d J=%d\n",i,j);
        }

    }

    return 0;
}

