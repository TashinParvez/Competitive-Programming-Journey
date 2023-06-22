#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Here a=%d and b=%d.",a,b);
    if(a>b)
    {
        printf("We can see a>b\n");
        printf("%d+%d= %d\n",a,b,a+b);
        printf("%d-%d= %d\n",a,b,a-b);
        printf("%d*%d= %d\n",a,b,a*b);
        printf("%d/%d= %d\n",a,b,a/b);
        printf("%d%%d= %d\n",a,b,a%b);
    }
    else if (b>a)
    {
        printf("We can see b>a\n");
        printf("%d+%d= %d\n",b,a,a+b);
        printf("%d-%d= %d\n",b,a,b-a);
        printf("%d*%d= %d\n",b,a,a*b);
        printf("%d/%d= %d\n",b,a,b/a);
        printf("%d%%%d= %d\n",b,a,b%a);
    }
    return 0;
}

