#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x,x1,y,y1,z,z1;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d%d%d%d%d",&x,&x1,&y,&y1,&z,&z1);

        if(x1>=x)
        {
            if(y1>=y)
            {
                if(z1<=z)
                    printf("yes\n");
                else
                    printf("No\n");

            }
            else
                printf("No\n");

        }
        else
            printf("No\n");
    }


    return 0;
}

