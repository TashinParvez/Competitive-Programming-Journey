#include<stdio.h>


void fun1(int a)
{
    a=12;
    printf("Local= %d\n",a);
}

int main()
{

    int a=10;
    printf("Global= %d\n",a);

    if(a>=10)
    {
        fun1(a);
    }

    printf("Global= %d\n",a);

    return 0;
}
