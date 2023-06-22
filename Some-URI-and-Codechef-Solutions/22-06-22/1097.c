#include<stdio.h>
int main()
{int j,i,k=7;
    for(i=1; i<=9; i=i+2)
    {
        for(j=k; j>k-3; j=j-1)
        {
            printf("I=%d J=%d\n",i,j);
        }
        k=k+2;

    }

/*

I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
...
I=9 J=15
I=9 J=14
I=9 J=13

*/
    return 0;
}



