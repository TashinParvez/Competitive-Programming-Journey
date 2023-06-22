#include<stdio.h>
int main()
{

    int x,y,z=0;
    scanf("%d",&x);


    for(int i=1; i<=x; i++)
    {
        scanf("%d",&y);
        if(y==2)
        {
            printf("2 eh primo\n");
        }
        else
        {
            for(int j=2; j<y; j++)
            {
                if(y%j==0)
                {
                    z=z+1;
                    break;
                }
            }
            if(z>0)
                printf("%d nao eh primo\n",y);
            else
                printf("%d eh primo\n",y);

        }
        z=0;


    }


    return 0;
}




