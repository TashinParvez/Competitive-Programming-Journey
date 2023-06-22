#include<stdio.h>
int main()
{
    int array2D[2][3]={{1,2,3},{4,5,6}};
    array2D[0][2]=10001;
    array2D[1][1]=20002;

    printf("%d\n",array2D[0][2]);
    printf("%d\n",array2D[1][1]);



    return 0;
}
