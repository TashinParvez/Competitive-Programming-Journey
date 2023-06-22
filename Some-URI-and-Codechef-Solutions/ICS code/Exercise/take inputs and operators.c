#include<stdio.h>
int main()
{
     float r=(int)2.9;
    printf("%0.0f",r);


    int a,b;
    scanf("%d %d",&a,&b);
    printf("Choice- 1, 2, 3, 4 are for performing addition, subtraction, multiplication, division respectively\n");
    int c;
    scanf("%d",&c);
    if (c==1)
    {
        printf("addition=%d\n",a+b);
    }
    else if(c==2)
    {
        printf("subtraction=%d\n",a-b);

    }
    else if(c==3)
    {
        printf("multiplication=%d\n",a*b);

    }
    else if(c==4)
    {
        if(b==0)
        {
            printf("Error: Divisor is zero\n");
        }
        else
        {
            printf("Chose case 1,2 where Case-1, 2 evaluate quotient and reminder\n");
            int D;
            scanf("%d",&D);
            if(D==1){
                printf("quotient=%d",a/b);
            }
            else if(D==2){
                printf("reminder=%d",a%b);
            }
        }

    }

    return 0;
}
