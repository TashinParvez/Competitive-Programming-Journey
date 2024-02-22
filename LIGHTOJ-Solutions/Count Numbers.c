#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);

    int totalNumbers=0;
    char str[1000];
    fflush(stdin);
    while(t--)
    {
        gets(str);
        totalNumbers=0;

        for(int j=0; j<strlen(str); j++)
        {
            if((str[j]==' ' && str[j+1]!=' ' )|| str[j+1]!='\n')
                totalNumbers++;
        }

        printf("%d\n",totalNumbers);
    }
    return 0;
}

