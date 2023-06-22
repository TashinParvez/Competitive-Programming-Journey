#include<stdio.h>
int main()
{
    while(1)
    {
        int number;
        printf("enter a number: ");
        scanf("%d",&number);

        if(number>=0){
        printf("Positive Number\n");
        break;
        }
        else if(number<0 && number%2==0){
            printf("Negative Even number\n");
        }
        else{
            printf("%d\n",number);
        }

    }

    return 0;
}
