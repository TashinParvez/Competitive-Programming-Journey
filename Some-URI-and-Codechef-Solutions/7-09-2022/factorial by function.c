#include<stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n", factorial(n));

    main();
    return 0;
}

