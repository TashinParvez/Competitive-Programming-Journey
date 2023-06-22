#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    gets(str1);
    char c;
scanf("%c",&c);


for(int i=0; str1[i]!='\0'; i++)
{
    if(str1[i]==c)
    break;
    else if(str1[i]!=c)
    str1[i]='*';

}
int flag=0,index;

for(int i=0; str1[i]!='\0'; i++)

{
    if(flag==1)
    printf("%c",str1[i]);
    if(str1[i]=='*')
    continue;
    else if(str1[i]==c)
    {
   flag=1;
   index=i;
   printf("Index of %c is %d\n",c,index);
        printf("%c",str1[i]);
    }

}



    return 0;
}
