#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int x,y,z,v1,v2;
        scanf("%d%d%d%d%d",&x,&y,&z,&v1,&v2);
        x=z-x;
        y=y-z;
        float t1=(float)x/v1;
        float t2=(float)y/v2;
        if(t1<t2)
            printf("Chef\n");
        else if(t2<t1)
            printf("Kefa\n");
        else
            printf("Draw\n");
    }

    return 0;
}

