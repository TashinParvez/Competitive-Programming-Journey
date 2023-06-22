#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    char copied[100]="0";

    int i=0;
    while(str[i]!='\0'){
        copied[i]=str[i];
        i++;
    }
    i=0;

    // printing string
    while(copied[i]!='\0'){
        printf("%c",copied[i]);
        i++;
    }




    main();
    return 0;
}

//   another approch
//   int length = strlen(str);

