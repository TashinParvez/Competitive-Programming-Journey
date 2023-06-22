#include<stdio.h>
int generatePrimeNumber(int x)
{
    if(2<x)
    {
        printf("Prime less than %d: %d, ",x,2);

        if(3<x)
        {
            printf("%d, ",3);

        }
    }

    for(int i=4; i<x; i++)
    {
        int count=0;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d, ",i);

        }

    }

}


int main()
{
    printf("\nENTER A NUMBER ");
    int x;
    scanf("%d",&x);
    generatePrimeNumber(x);

    main();
    return 0;
}

