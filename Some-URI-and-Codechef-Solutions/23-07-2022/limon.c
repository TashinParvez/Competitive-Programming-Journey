#include<stdio.h>
int main()
{

    int x,n;
    scanf("%d",&x);
    printf("%dNumber of terms : ");
    scanf("%d",&n)

    float sum=1;

    if(n==1)
    {
        printf("Sum= 1\n");

    }
    int fact=1;
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            fact=fact*j;
        }

        if(i%2==0)
        {

            sum=sum-(pow(x,i))/fact;
        }
        else
        {
            sum=sum+(pow(x,i))/fact;
        }


    }




    // sum of the series [ 1-X^2/2!+X^4/4!- .........]
    //
    Input the Value of x :2
    Input the number of terms : 5

    the sum = -0.415873
    Number of terms = 5
    value of x = 2.000000


                                        return 0;
}

