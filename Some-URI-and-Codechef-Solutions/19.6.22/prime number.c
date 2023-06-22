// prime numbers

#include<stdio.h>
int main()
{
    int num,p=0;



    printf("Enter a number: ");
    scanf("%d",&num);


    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            p=1;
            break;
        }
    }

    if(p==1)
        printf("Not a prime number\n");
    else
        printf("prime number\n");


    return 0;
}
