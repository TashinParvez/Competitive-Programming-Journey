#include<stdio.h>
int main()
{
    int x;
    float y;
    scanf("%d%f",&x,&y);

    if(x+0.50>y || x%5!=0)
    {
        printf("%.2f\n",y);
    }
    else
    {
        printf("%.2f\n",y-(x+0.50));

    }

    return 0;
}

