#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    fflush(stdin);

    for(int i=0; i<t; i++)
    {
        int count = 0;

        char ch[1000];
        gets(ch);

        for(int j=0; j<strlen(ch); j++)
        {
            if(ch[j]=='-' || ( ch[j]>='0'||ch[j]<='9') || ch[j+1]!='\0')
            {
                for(int l = j+1 ;  l<strlen(ch); l++)
                {
                    if( ch[i]>='0'||ch[i]<='9')
                        continue;
                    if(ch[l] == ' ' && ch[l-i]=='-')
                    {
                        break;
                    }
                    if(ch[l] == ' ')
                    {
                        count++;
                        j=l-1;
                        break;
                    }
                }

            }

        }
        printf("%d\n",count);
    }
    return 0;
}

