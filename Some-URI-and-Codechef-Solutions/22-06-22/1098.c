#include<stdio.h>
int main()
{
    float j,i;
float k=1;
    for(i=0; i<=2; i=i+0.2)
    {
        for(j=k; j<k+3; j=j+1)
        {
            printf("I=%d J=%d\n",i,j);
        }
        k=k+0.2;

    }

/*

I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?

*/
    return 0;
}


