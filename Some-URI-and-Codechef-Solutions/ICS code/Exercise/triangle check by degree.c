#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a+b+c==180)
    {
        if(0< a && a<180 && 0< b && b<180 && 0< c && c<180)
        {
            printf("This is a triangle");
        }
        else
        {
            printf("This can't be a triangle");
        }
    }
    else
    {
        printf("This can't be a triangle");
    }


    return 0;
}
