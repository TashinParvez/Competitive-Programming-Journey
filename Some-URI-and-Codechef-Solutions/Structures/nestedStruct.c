#include<stdio.h>
#include<string.h>


typedef struct A
{
    
    int a;
    
    // you can define a struct within another struct in this way
    struct C
    {
        int c;
    }C;

    // you can also declare variables of another struct type here like this
    B b_var;

}A;


typedef struct B
{
    int b;
}B;

int main()
{
    A a_var;
    a_var.C.c = 10; // assigning value to the C type variable within variable of struct type A
    a_var.b_var.b = 100; // assigning value to the B type variable within variable of struct type A

    printf("%d", a_var.b_var.b); // accesing B type variable within A type variable
}