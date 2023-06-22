#include<stdio.h>
int main()
{
    int num1=5;
    int num2=6;

    int result= num1++ + --num2;

    printf("Result = %d\n",result);

    result= num1 + num2;
    printf("Result = %d\n",result);

    result++;
    printf("Result = %d\n",result);


    if (++num1 > num2)
    {
        printf("Result = %d\n",result);
    }


    return 0;
}

