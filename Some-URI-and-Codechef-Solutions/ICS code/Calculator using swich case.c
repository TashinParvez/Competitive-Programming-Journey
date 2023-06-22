#include<stdio.h>
int main()
{
    char c;
    printf("Enter a operator: ");
    scanf("%c",&c);

    int a,b;
    printf("Enter 1st and second number: ");
    scanf("%d %d",&a,&b);

    double result;

    switch(c)
    {
    case '+':
        result=a+b;
        break;

    case '-':
        result=a-b;
        break;

    case '*':
        result=a*b;
        break;
    }

    printf("Result=%.2lf\n",result);
    return 0;
}
