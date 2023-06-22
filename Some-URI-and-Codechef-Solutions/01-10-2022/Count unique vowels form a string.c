#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    fflush(stdin);
    int p=0;

    for(int i=0; str[i]!='\0' ; i++)
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u' || str[i]=='A' || str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U' )
        {
            p++;

            for(int j=i+1; str[j]!='\0' ; j++)
            {
                if(str[i]==str[j])
                {
                    str[j]='0';
                }
            }

        }
    }


    printf("%d",p);
    return 0;
}

