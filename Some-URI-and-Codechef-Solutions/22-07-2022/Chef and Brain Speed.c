#include<stdio.h>
int main()
{
    int limitBPS,currentBPS;
    scanf("%d%d",&limitBPS,&currentBPS);


    if(limitBPS<currentBPS)
        printf("Yes\n");
    else
        printf("%s\n","No");


    return 0;
}

