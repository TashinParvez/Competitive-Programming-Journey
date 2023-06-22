#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int digit=(int)log(n);
printf("%d\n",digit);

    int sum = 0,kk;
    int nn=n;
    for(int i=digit-1; i>=0; i--)
    {
        kk=nn%10;
        sum=sum+ kk * pow(10 , i);
        nn=nn/10;
        if(nn<10)
        {
            sum=sum + nn * pow(10,i-1);
            break;
        }
    }

printf("%d\n",sum);

    int m=sum;
    int pp;
    for(int i=0; i<i+1; i++)
    {
        pp=m%10;

        if(pp==0)
            printf("Zero");
        else if(pp==1)
            printf("One");
        else if(pp==2)
            printf("Two");
        else if(pp==3)
            printf("Three");
        else if(pp==4)
            printf("Four");
        else if(pp==5)
            printf("Five");
        else if(pp==6)
            printf("Six");
        else if(pp==7)
            printf("Seven");
        else if(pp==8)
            printf("eight");
        else if(pp==9)
            printf("nine");


        m=m/10;
            printf(" ");
        if(m<10)
        {
            pp=m;

            if(pp==0)
                printf("Zero");
            else if(pp==1)
                printf("One");
            else if(pp==2)
                printf("Two");
            else if(pp==3)
                printf("Three");
            else if(pp==4)
                printf("Four");
            else if(pp==5)
                printf("Five");
            else if(pp==6)
                printf("Six");
            else if(pp==7)
                printf("Seven");
            else if(pp==8)
                printf("eight");
            else if(pp==9)
                printf("nine");


            break;
        }
    }


    return 0;
}

