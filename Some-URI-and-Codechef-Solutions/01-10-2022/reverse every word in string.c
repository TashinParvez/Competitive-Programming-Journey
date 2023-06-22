#include<stdio.h>
#include<string.h>

void strwordsrev(char str[],int low,int high)
{
    while(low<high)
    {
        char temp = str[low];
        str[low]=str[high];
        str[high]=temp;

        low++;
        high--;
    }
}

int main()
{
    char str[100];
    gets(str);
    fflush(stdin);

    int i=0,low=0,high;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            high=i-1;
            strwordsrev(str,low,high);
            low=i+1;
        }
        else if(str[i+1]=='\0')
        {
            high=i;
            strwordsrev(str,low,high);
            low=i+1;
        }
        i++;
    }

    puts(str);
    return 0;
}

