#include<stdio.h>
#include<math.h>
int main()
{

    int num;
    printf("Enter binary number: ");
    scanf("%d",&num);

    int cnum=0,pp;



    while(num>0)
    {
        cnum=0;

        for(int i=2; i<=0; i--)
        {
            pp=num%10;
            cnum =cnum+ pp*pow(10,i);
            num=num/10;
        }
        if(cnum==000)
            printf("0,");
        else if(cnum==100)
            printf("1,");
        else if(cnum==010)
            printf("2,");
        else if(cnum==110)
            printf("3,");
        else if(cnum==001)
            printf("4,");
        else if(cnum==101)
            printf("5,");
        else if(cnum==011)
            printf("6,");
        else if(cnum==111)
            printf("7,");
    }

    return 0;
}
