#include<stdio.h>
void swapWord(char str[], int min, int max)
{
    int n=(max-min+1)/2;
    for(int i=1; i<=n; i++)
    {
        char temp =str[max];

        str[max] =str[min];
        str[min] =temp;

        max-=1;
        min+=1;
    }
}
int main()
{
    char str[100];
    gets(str);

    int min=0,max;

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ' || str[i+1]=='\0')
        {
            if(str[i]==' ')
                max = i-1;
            else
                max = i;

            swapWord(str,min,max);
            min=i+1;
        }
    }


    puts(str);

    return 0;
}
