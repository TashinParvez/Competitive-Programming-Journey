#include<stdio.h>
int main()
{

    int T;
    scanf("%d",&T);

    int candiNeed,packet=0, x,n;
    for(int i=1; i<=T; i++)
    {
        packet=0;
        scanf("%d%d",&n,&x);

        if(n<=x)
        {
            printf("0\n");
        }
        else
        {
            candiNeed=n-x;

            packet=packet+(candiNeed/4);
            candiNeed=candiNeed%4;
            if(candiNeed<4 && candiNeed>0)
            {
                packet=packet+1;
                printf("%d\n",packet);
            }
            else
            {
                printf("%d\n",packet);
            }
        }
    }

    return 0;
}
