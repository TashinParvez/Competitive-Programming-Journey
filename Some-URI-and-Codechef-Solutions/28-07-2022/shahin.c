#include<stdio.h>
int main(void)
{
    int l,b;
    scanf("%d",&l);
    scanf("%d",&b);

    int A=l*b;
    int p=2*(l+b);

    if(A>p)
    {
        printf("Area\n");
        printf("%d\n",A);
    }
    else if(A==p)
    {
        printf("Eq\n");
        printf("%d\n",p);
    }
    else
    {
        printf("Peri\n");
        printf("%d\n",p);
    }
    return 0;
}
