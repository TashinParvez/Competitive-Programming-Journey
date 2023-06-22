#include<stdio.h>
int main()
{
    char str[10];
    FILE *ptr;
    ptr=fopen("tashin.txt","r");


    str=fgets(ptr);

    printf("%s",str);


    fclose(ptr);


    return 0;
}

