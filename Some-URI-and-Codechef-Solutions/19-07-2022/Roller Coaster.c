#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x,h;
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&x,&h);

        if(x>=h)
        printf("YEs\n");
        else{
        printf("No\n");

        }



    }
    return 0;
}



