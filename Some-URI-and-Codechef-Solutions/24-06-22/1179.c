#include<stdio.h>
int main()
{
    int coll[15],par[5],impar[5];
    int a,p=0,m=0,total=0;


    for(int i=0; i<=14; i++)    // taking 15 numbers
    {
        scanf("%d",&coll[i]);
    }


// -----------------------------  first 5 even numbers
    int pp=0,i;
    for(i=0; i<=15; i++)
    {
        if(coll[i]%2==0)
        {
            par[pp]=coll[i];
            printf("par[%d] = %d\n",pp,par[pp]);
            total=total+1;
            if(total==15)
                break;
            pp=pp+1;
            if(pp==5)
            {
                pp=0;
                break;
            }
        }
    }



// -----------------------------  first 5 odd numbers
    int mm=0;
    int j;
    for(j=0; j<=15; j++)
    {
        if(coll[j]%2!=0)
        {
            impar[mm]=coll[j];
            printf("impar[%d] = %d\n",mm,impar[mm]);
            total=total+1;
            if(total==15)
                break;
            mm=mm+1;
            if(mm==5)
            {
                mm=0;
                break;
            }
        }
    }


// -----------------------------  lest odd numbers
    int k;
    for(k=j+1; k<=15; k++)
    {
        if(coll[k]%2!=0)
        {
            impar[mm]=coll[k];
            printf("impar[%d] = %d\n",mm,impar[mm]);
            total=total+1;
            if(total==15)
                break;
            mm=mm+1;
            if(mm==4)
            {
                break;
                mm=0;
            }
        }
    }


// -----------------------------  lest even numbers

    int l;
    for(int l=i+1; l<=15; l++)
    {
        if(coll[l]%2==0)
        {
            par[pp]=coll[l];
            printf("par[%d] = %d\n",pp,par[pp]);
            total=total+1;
            if(total==15)
                break;
            pp=pp+1;
            if(pp==5)
            {
                pp=0;
                break;
            }
        }
    }





    return 0;
}


