#include<stdio.h>
int main()
{
    FILE *ptr;
    char str[100];

    ptr= fopen("append.txt","a");


    printf("Write what you want to add :");
    gets(str);

    fprintf(ptr,"%s",str);

    fclose(ptr);

main();
    return 0;
}
