#include<stdio.h>
int main()
{
    // ----- 1st array input

    int arr1[100];
    printf("Enter 1st array size: ");
    int n;     // 1st array size
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }


    // ------ 2nd array input
    int arr2[100];
    printf("Enter 2nd array size: ");
    int m;     // 2nd array size
    scanf("%d",&m);
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }


    // array for swaping arrays
    int swap[100];



    // putting all values of 1st array to swaping array

    for(int i=0; i<n; i++)
    {
        swap[i]=arr1[i];
    }


    // putting all values of 2nd array to 1st array

    for(int i=0; i<m; i++)
    {
        arr1[i]=arr2[i];
    }


// putting all values of 1nd array to 2st array

    for(int i=0; i<n; i++)
    {
        arr2[i]=swap[i];
    }




    printf("\n\nAfter swapping\n\n");
    printf("1st array : \n");   // print 1st array

    for(int i=0; i<m; i++)
    {
        printf("%d ",arr1[i]);
    }



    printf("\n");
    printf("2nd array : \n");   // print 2nd array


    for(int i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}

