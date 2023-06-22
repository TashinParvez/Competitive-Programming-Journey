#include<stdio.h>
int main()
{
    char c;
    char str[10];

    FILE *ptr;
    ptr=fopen("read.txt","r");

    // c=fgetc(ptr);
    // printf("%c",c);


//    while(! feof(ptr))
//    {
//        c=fgetc(ptr);
//        printf("%c",c);
//    }


    //  fgets(str,10,ptr);
    //  printf("%s",str);


    while(!feof(ptr))
    {
        fgets(str,10,ptr);
        printf("%s",str);

    }


    fclose(ptr);
    return 0;
}

