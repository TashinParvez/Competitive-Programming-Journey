#include<stdio.h>
int main()
{
    int a=4, b=3;

    a  = a ^b;
    b  = a ^b;
    a  = a ^b;


    printf(" %d  %d\n",a,b);
    return 0;
}

