#include<Stdio.h>
    void swapTwoNumbers(int num1,int num2)
    {
        int temp=num1;
        num1=num2;
        num2=temp;

        printf("n1=%d, n2=%d\n",num1,num2);
    }

int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);

    printf("Before swapping:  n1=%d, n2=%d",num1,num2);
    printf("\nAfter swapping:  ");
    swapTwoNumbers(num1,num2);

    return 0;
}
