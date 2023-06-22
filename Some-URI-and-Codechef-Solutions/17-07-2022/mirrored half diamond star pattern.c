#include<stdio.h>
int main()
{
    int N,i, columns;
    scanf("%d",&N);

    columns=1;
int spaces=N-1;
    for(i=1; i<N*2; i++)
    {

        for(int k=1 ; k<=spaces ; k++)
        {
            printf("  ");
        }



        for(int j=1; j<=columns; j++)
        {
            printf("* ");
        }


        if(i < N){

            columns++;
            spaces--;
        }
        else{

            spaces++;
            columns--;
        }

        printf("\n");



    }

    return 0;
}
