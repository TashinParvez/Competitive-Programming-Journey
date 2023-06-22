#include<stdio.h>
int cubeOfN(int n,int i)
{
    if(i==0)
        return 1;
    return n*cubeOfN(n,i-1);
}
int main()
{
        printf("Enter a number ");

    int n;
    scanf("%d",&n);

    int i=3;
    printf("%d",cubeOfN(n,i));

    main();
    return 0;
}

