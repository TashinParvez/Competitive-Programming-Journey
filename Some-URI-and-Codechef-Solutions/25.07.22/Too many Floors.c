#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int x,y;
    for(int i =1; i<=t; i++)
    {
        scanf("%d %d",&x,&y);

        int yroom,room,xroom,count=0;

        for(int j=1; j<=2; j++)
        {
            if(j==1)
                room=x;
            else
                room=y;

            if(room>=1 && room<=10)
                count=1;
            else if(room>=11 && room<=20)
                count=2;
            else if(room>=21 && room<=30)
                count=3;
            else if(room>=31 && room<=40)
                count=4;
            else if(room>=41 && room<=50)
                count=5;
            else if(room>=51 && room<=60)
                count=6;
            else if(room>=61 && room<=70)
                count=7;
            else if(room>=71 && room<=80)
                count=8;
            else if(room>=81 && room<=90)
                count=9;
            else if(room>=91 && room<=100)
                count=10;

            if(j==1)
                xroom=count;
            else
                yroom=count;

        }

        if(xroom>=yroom)
            printf("%d\n",xroom-yroom);
        else
            printf("%d\n",yroom-xroom);

    }

    return 0;
}

