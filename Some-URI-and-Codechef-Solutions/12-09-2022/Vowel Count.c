#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int j=0; j<t; j++)
    {
        fflush(stdin);
        char str[1001];
        gets(str);

        int count=0;

        for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u' )
                count++;
        }
        printf("Number of vowels = %d\n",count);
    }

    return 0;
}

