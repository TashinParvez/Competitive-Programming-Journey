#include<stdio.h>
int strLength(char str[])
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {

    }
    return i;
}
int main()
{
    char str[100];
    gets(str);
    int i = strLength(str);

//    int i=0;
//    while(str[i]!='\0')
//        i++;

    printf("%d is string length",i);

    return 0;
}

//   another approach
//   int length = strlen(str);
