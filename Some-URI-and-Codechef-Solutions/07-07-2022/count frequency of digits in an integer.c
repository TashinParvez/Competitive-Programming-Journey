#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    int digit,p;
    // to know digit
    for(int i=0; i<i+1; i++)
    {
        p = n%10;
        digit=digit+1;
        n=n/10;
        if(n<10)
        {
            digit=digit+1;
            break;
        }
    }
    // printf("%d",digit);

    // m main number
    int arr[digit];
    int pp;
    for(int i=0; i<digit; i++)
    {
        pp=m%10;
        arr[i]=pp;
        m=m/10;
        if(m<10)
        {
            arr[i+1]=m;
            break;
        }
    }

    int cou=0;

    for(int i=0; i<=9; i++)
    {
        for(int j=0; j<digit; j++)
        {
            if(arr[j]==i)
                cou=cou+1;
        }
        printf("Frequency of %d = %d\n",i,cou);
        cou=0;
    }


    return 0;
}
