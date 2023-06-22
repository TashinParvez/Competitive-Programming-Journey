#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int totalPoint,pass;

    for(int i =1; i<=t; i++)
    {
        int totalCase=10;
        scanf("%d%d",&totalPoint,&pass);

        printf("%d\n",pass*(totalPoint/totalCase));
    }

    return 0;
}

