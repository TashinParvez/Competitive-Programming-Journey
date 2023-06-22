//Question: Write a program to print number from 1 to 10
//        but when the number is odd add 1 with it and
//        when the number is even subtract 1 form the number.
// output: 2 1 4 3 6 5 8 7 10 9

#include<stdio.h>
int main()
{
    int a=1;
    while(a<=10)
    {
        odd(a);
        a++;
    }
    return 0;
}

int odd(int a)
{
    if(a%2!=0)
    {
        printf("%d ",a+1);
    }
    else
    {
        even(a);
    }
}
int even(int a)
{
    if(a%2==0)
    {
        printf("%d ",a-1);
    }
}
