#include<stdio.h>

typedef struct playersInfo
{

    char name[100];
    char country[100];

    int runs[3];
    int wickets[3];
    int points[3];
} playerinfo;



// ------------------- functions

void enterinfo(int i,playerinfo p[])
{
    printf("%d Player INFORMATION \n",i+1);

    printf("Enter Name: \n");
    gets(p[i].name);
    printf("Enter Country Name: \n");
    gets(p[i].country);

    printf("Enter 3 matches runs: \n");
    for(int j=0; j<3; j++)
    {
        scanf("%d",&p[i].runs[j]);
    }

    printf("Enter 3 matches wickets: \n");
    for(int j=0; j<3; j++)
    {
        scanf("%d",&p[i].wickets[j]);
    }

    countPoints(i,p);

}
//------------------- count points
void countPoints(int i,playerinfo p[])
{
    int wickets = 0;
    for(int j=0; j<3; j++)
    {
        wickets = p[i].wickets[j];
        p[i].points[j]= p[i].wickets[j]*12;

        // entering points from runs
        if(p[i].runs[j]<=25)
            p[i].points[j]+=5;
        else if(p[i].runs[j]<=50)
            p[i].points[j]+=10;
        else if(p[i].runs[j]<=75)
            p[i].points[j]+=15;
        else if(p[i].runs[j]>75)
            p[i].points[j]+=20;
    }
}

// printing




//----------------- main function


int main()
{
    int n=2;
    playerinfo p[n];

    for(int i=0; i<n; i++)
    {
        enterinfo(i,p);
    }


    for(int i=0; i<n; i++)
    {
        printEachPoints(i,n,p);
    }



        printEachPoints(int i,int n, playerinfo p){
        printf("MATCH %d\n",i+1);

        for(int j=0,j<n,j++)
        {
        puts(p[j].name);
        printf("Points %d\n\n",p[].points);
        }

        }


    return 0;
}
