#include<stdio.h>
void    convertNumber(int n,int b)
{
    if(b<2 || b>16)
    {
        printf("Base in not in the range\n");
        main();
    }
    else
    {

        if(b==2)
        {

        }
        else if(b==8)
        {

        }
        else if(b==16)
        {

        }

    }
}
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);

    convertNumber(n,b);





    printf("%d",n);
    return 0;
}
