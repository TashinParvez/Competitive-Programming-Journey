#include<stdio.h>
int main()
{
    int a,b,c,d,e,even=0,odd=0,poss=0,neg=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);



    if(a%2==0)
        even=even+1;
    else
        odd=odd+1;

    if(b%2==0)
        even=even+1;
    else
        odd=odd+1;
    if(c%2==0)
        even=even+1;
    else
        odd=odd+1;
    if(d%2==0)
        even=even+1;
    else
        odd=odd+1;
    if(e%2==0)
        even=even+1;
    else
        odd=odd+1;

    // checking positive and negative

    if(a>0)
        poss=poss+1;
    else if(a<0)
        neg=neg+1;
    if(b>0)
        poss=poss+1;
    else if(b<0)
        neg=neg+1;
    if(c>0)
        poss=poss+1;
    else if(c<0)
        neg=neg+1;
    if(d>0)
        poss=poss+1;
    else if(d<0)
        neg=neg+1;
    if(e>0)
        poss=poss+1;
    else if(e<0)
        neg=neg+1;




    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,poss,neg);
    return 0;
}


