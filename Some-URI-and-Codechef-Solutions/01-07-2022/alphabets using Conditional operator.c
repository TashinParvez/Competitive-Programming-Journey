#include<stdio.h>
int main()
{
    char c;
    c= getchar();

    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
    printf("This is a alphabet\n");
    }
    else {
    printf("This is not a alphabet\n");

    }
    return 0;
}

