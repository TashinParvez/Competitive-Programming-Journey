#include<stdio.h>
int main()
{
    int r,o,c;
    scanf("%d%d%d",&r,&o,&c);

    o=20-o;
    o=o*6;
    o=o*6+c;

    if(o>r)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

