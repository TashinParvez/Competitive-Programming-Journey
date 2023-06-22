#include<stdio.h>
int main()
{
    int t1,t2;
    int x;
    int totalgame=1,Iwin=0,Gwin=0,draw=0;

    while(1)
    {
        scanf("%d%d",&t1,&t2);
        printf("Novo grenal (1-sim 2-nao)\n");



        if(t1>t2)
        {
            Iwin=Iwin+1;
        }
        else if(t1<t2)
        {
            Gwin=Gwin+1;
        }
        else
        {
            draw=draw+1;
        }



        scanf("%d",&x);
        if(x==1)
        {
            totalgame=totalgame+1;
            continue;
        }
        else if(x==2)
            break;

    }

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",totalgame,Iwin,Gwin,draw);

    if(Iwin==Gwin)
        printf("Não houve vencedor\n");
    else if(Iwin>Gwin)
        printf("Inter venceu mais\n");
    else if(Iwin<Gwin)
        printf("Gremio venceu mais\n");

    return 0;
}

