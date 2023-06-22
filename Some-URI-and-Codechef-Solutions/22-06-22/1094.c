#include<stdio.h>
int main()
{
    float perC,perR,perS;
    int N,a,totalani=0,totalc=0,totalr=0,totals=0;
    char c;



    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        scanf("%d\n%c",&a,&c);

        totalani+=a;


        if(c=='C')
            totalc+=a;
        else if(c=='R')
            totalr+=a;
        else if(c=='S')
            totals+=a;


    }

    perC= ((float)(totalc*100)/(float)totalani);
    perR= ((float)(totalr*100)/(float)totalani);
    perS= ((float)(totals*100)/(float)totalani);


    printf("Total: %d cobaias\n",totalani);
    printf("Total de coelhos: %d\n",totalc);
    printf("Total de ratos: %d\n",totalr);
    printf("Total de sapos: %d\n",totals);


    printf("Percentual de coelhos: %.2f %%\n",perC);
    printf("Percentual de ratos: %.2f %%\n",perR);
    printf("Percentual de coelhos: %.2f %%\n",perS);



    return 0;
}

