#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int r;
    for(int i=1; i<=T; i++)
    {
        scanf("%d",&r);


        if(r<1600)
            printf("3\n");
        else if(r>=1600 && r<2000)
            printf("2\n");
        else if(r>=2000)
            printf("1\n");
    }


    return 0;
}

