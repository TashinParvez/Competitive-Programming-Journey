#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    fflush(stdin);

    for(int i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='0' && str[i]<='9') || str[i]==' ' ||  str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            for(int j=i; str[j]!='\0'; j++)
            {
                str[j]= str[j+1];
            }
            i--;
        }

    }


    puts(str);
    return 0;
}

