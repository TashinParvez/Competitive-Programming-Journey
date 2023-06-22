#include<stdio.h>
int main()
{
    int arr[5];
    int arr2[5];

    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    int i;
    for(i=0; i<5; i++)
    {
        arr2[i]=arr[i];

    }


    printf("----------------------\n");


    for(i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr2[i]==arr[j]){
            printf("%d\n",arr2[i]);

            }

        }

    }



    return 0;
}
