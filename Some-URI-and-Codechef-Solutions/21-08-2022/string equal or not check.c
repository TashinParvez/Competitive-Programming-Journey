#include<stdio.h>
int equalStrings(char str1[],char str2[])
{
    int str=0;
    while(str1[str]!='\0')
    {
        if(str1[str]!=str2[str])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str1[]="Tashin ";
    char str2[]="Parvez";
    printf("%d",equalStrings(str1,str2));
    return 0;
}
