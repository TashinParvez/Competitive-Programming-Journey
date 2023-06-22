#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c); // taking input

        int firstLift,secondlift;

        // calculation of first lift
        if(a==1)
        {
            firstLift=0;
        }
        else if(a>1)
        {
            firstLift = a-1;
        }


        // calculation of second lift
        if(c>1)
        {
            if(b>c)
            {
                secondlift= (b-c)+(c-1);
            }
            if(b<c)
            {
                secondlift= (c-b)+(c-1);
            }
        }
        else if(c==1)
        {
            if(b>1)
                // only one condition left bcz (c!=b)
                // it will work as like lift 1
                secondlift= (b-c);
        }



        if(firstLift==secondlift)
            printf("3\n");
        else if(firstLift<secondlift)
            printf("1\n");
        else if(firstLift>secondlift)
            printf("2\n");


        // a first lift
        // 2nd left is on b and will move to c then come down


    }
    return 0;
}

