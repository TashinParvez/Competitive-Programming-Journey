#include<stdio.h>
int main()
{

    FILE *ptr;
    char str[18]="TASHIN PARVEZ";
    char s[100]="ssssssssssssssssssss";

    ptr=fopen("abc.txt","w");

    fputs(str, ptr); // str input


    fprintf(ptr, "%s", s); // printing


    fclose(ptr);

    return 0;
}
