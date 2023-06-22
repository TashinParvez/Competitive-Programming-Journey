#include<stdio.h>
int generatePrimeNumber(int x)
{
    int flag =0;

    for(int i=2; flag!=x; i++)
    {
        if(i==2||i==3)
        {
            flag++;
            if(flag==x)
            {
                printf("%d",i);
                return 0;
            }
        }
        else
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
                flag++;
                if(flag==x)
                {
                    printf("%d",i);
                    return 0;
                }

            }

        }
    }

}


int main()
{
    printf("\nENTER Nth NUMBER ");
    int x;
    scanf("%d",&x);
    generatePrimeNumber(x);

    main();
    return 0;
}

