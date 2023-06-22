#include<stdio.h>
int main()
{
    int l,b;
    scanf("%d",&l);
    scanf("%d",&b);

    int Area=l*b;
    int pre=2*(l+b);

    if(Area>pre)
    {

        printf("Area\n");
        printf("%d\n",Area);
    }
    else if(Area<pre)
    {
        printf("Peri\n");
        printf("%d\n",pre);
    }
    else
    {
        printf("Eq\n");
        printf("%d\n",pre);
    }
    return 0;
}

