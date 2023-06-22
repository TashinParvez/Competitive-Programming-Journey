#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    fflush(stdin);

    char str[100001];
    char c;

    for(int i=1; i<=t; i++)
    {

        scanf("%[^\n]%*c", str);
        fflush(stdin);
        scanf("%c",&c);
        fflush(stdin);

        int count=0;
        for(int j=0; str[j]!='\0'; j++)
        {
            if(str[j]==c)
                count++;
        }
        printf("Occurrence of '%c' in '",c);
        printf("%s",str);
        printf("' = %d\n",count);
    }

    return 0;
}
