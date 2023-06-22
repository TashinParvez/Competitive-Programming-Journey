#include<stdio.h>
int primeOrNot(int x)
{
    if(x==2 || x==3)
    {
        printf("PRIME\n");
        //return 0;
    }
    else
    {
        int i=2;

        while(i<x)
        {
            if(x%i==0)
            {
                printf("NOT A PRIME NUMBER\n");
                return 0;
            }
            i++;
        }
        printf("PRIME\n");
    }
}
int main()
{
    printf("ENTER A NUMBER ");
    int x;
    scanf("%d",&x);
    primeOrNot(x);

    main();
    return 0;
}

