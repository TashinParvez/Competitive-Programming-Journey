#include<stdio.h>
int XpowerY(int x,int y)
{
    if(y==0)
        return 1;
    return x*XpowerY(x,y-1);
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);

    printf("%d\n", XpowerY(x,y));


    main();
    return 0;
}

