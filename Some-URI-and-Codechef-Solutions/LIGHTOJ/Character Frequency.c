#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    char str[10000];
    char c;
    for(int i=1; i<=t; i++)
    {

        fflush(stdin);
        scanf("%[^\n]%*c", str);
        fflush(stdin);
        scanf("%c",&c);
        int count=0;
        for(int j=0; str[j]!='\0'; j++)
        {
            if(str[j]==c)
                count++;
        }

        printf("Occurrence of '%c' in '%s' = %d\n",c,str,count);
    }

    return 0;
}
