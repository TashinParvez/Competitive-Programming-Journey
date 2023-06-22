#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    fflush(stdin);

    char str[1001];


    for(int i=1; i<=t; i++)
    {
        int abcd[26]= {0};

        gets(str);

        for(int j = 0; j<strlen(str) ; j++)
        {
            abcd[(int)(str[j]-'a')]++;
        }

        for(int jj = 0; jj<strlen(str); jj++)
        {

            if( abcd[(int)(str[jj]-'a')] == 0)
                continue;
            printf("%c = %d \n",str[jj], abcd[(int)(str[jj]-'a')]);
            abcd[(int)(str[jj]-'a')]=0;
        }

        //    printf("mmmm  %d",abcd['m'-'a']);

    }
    return 0;
}

