#include <stdio.h>

int checkfun(int *array, int x, int low, int hig)
{
    while (low <= hig)
    {
        int midValue = low + (hig - low) / 2;

        if (*(array+midValue) == x)
            return midValue;

        if (*(array+midValue) < x)
            low = midValue + 1;
        else
            hig = midValue - 1;
    }

    return -1;
}


int main()
{
    printf("Enter Size of the Array: ");
    int n;
    scanf("%d",&n);
    int array[n];

    printf("Enter the Array Elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);

    }

    printf("Enter the Number to find: ");

    int x;
    scanf("%d",&x);


    int o = checkfun(array, x, 0, n - 1);
    {

        if(o == -1)
            printf("\nThe number %d is not found on the array.",x);
        else
            printf("\nThe number %d is found at %d position of the array.",x, o);

    }

    return 0;
}
