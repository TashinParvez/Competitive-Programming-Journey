#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);

        if(z%x==0)
        {
            if(z%y==0)
                printf("ANY\n");
            else
            {
                printf("CHICKEN\n");

            }
        }
        else if(z%y==0)
            printf("DUCK\n");
        else
        {
            printf("NONE\n");
        }

    }

        return 0;
}

