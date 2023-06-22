#include<stdio.h>
int main()
{
for(int i=1; i<51; i++){
        if(i%3==0 && i%7==0){
            printf("%d and this is divisable by 3 and 7\n", i);
        }
        else if(i%3==0){
                printf("%d and this is divisible by 3\n", i);
        }
        else if(i%7==0){
        printf("%d and this is divisible by 7\n", i);
        }

}
return 0;
}
