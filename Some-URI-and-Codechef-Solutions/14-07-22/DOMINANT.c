#include<stdio.h>
int main()
{

    int T;
    scanf("%d",&T);
    int Na,Nb,Nc;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d%d",&Na,&Nb,&Nc);

        if(Na>Nb+Nc)

            printf("Yes\n");
        else if(Nb>Na+Nc)
            printf("Yes\n");

        else if(Nc>Nb+Na)

            printf("Yes\n");
        else
            printf("No\n");



    }



    return 0;
}

