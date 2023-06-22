#include<stdio.h>
int main()
{
    int a,b,p;
    printf("Enter 2 numbers(Num1<num2)(Num>=2): ");
    scanf("%d%d",&a,&b);

    for(int i=a; i<=b; i++)
    {
        p=0;
        if(a==1)
        {
            continue;
        }
        else if(a==2)
        {
            printf("1st prime number is %d\n",i);
        }
        else
        {
            for(int j=2; j<i; j++)
            {

                if(i%j==0)
                {
                    p=p+1;

                }

                if(p>0)
                {
                    break;
                }

            }
            if(p<1)
            {
                printf("1st prime number is %d\n",i);

            }
        }
    }

    return 0;
}
