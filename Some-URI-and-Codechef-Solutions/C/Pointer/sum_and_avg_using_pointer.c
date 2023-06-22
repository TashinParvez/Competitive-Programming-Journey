#include <stdio.h>
void sumAndavg(int ,int, int *, float *);
int main()
{
    int a, b, sum;
    float avg;

    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);

    sumAndavg(a, b, &sum, &avg);
    printf("Sum = %d\navg = %f",sum,avg);

    return 0;
}
void sumAndavg(int a, int b, int *ptr1, float *ptr2)
{
    *ptr1 = a + b;
    *ptr2 = (a + b)/2;
}