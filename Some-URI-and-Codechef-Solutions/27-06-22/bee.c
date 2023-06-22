#include<stdio.h>
int a = 10;
const float b=1;
#define int c=90;
int main()
{

    printf("c= %d\n",c);
    printf("B= %f\n",b);
    printf("Global(A)= %d\n",a);
    {
        int a=5;
        printf("Local(A)= %d\n",a);
    }
    if(a>0)
    {
        a=12;
        printf("Local(A)= %d\n",a);
    }
    printf("Global(A)= %d\n",a);





    return 0;
}
