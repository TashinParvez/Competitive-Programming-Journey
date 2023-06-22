#include<stdio.h>
int main()
{
    int n;
    float y;
    scanf("%d%f",&n,&y);
    if(n%5==0 && n<y)
    {
        y=y-n-0.50;
        printf("%.2f\n",y);
    }
    else
    {
        printf("%.2f\n",y);
    }
    return 0;
}

