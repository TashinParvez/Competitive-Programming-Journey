#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("choose atrthmetic operator form 1 to 4\n");
    int c;
    scanf("%d",&c);
    if (c==1)
    {
        printf("Addition: %d\n",a+b);
    }
    else if(c==2)
    {
        printf("Subtraction: %d\n",a-b);
    }
    else if(c==3)
    {
        printf("Multiplication: %d\n",a*b);
    }
    else if(c==4)
    {
        if(a==0||b==0)
        {
            printf("Error:Divisor is zero\n");
        }
        else
        {
            printf("Reminder: %d\n",a%b);
        }
    }

    return 0;
}
