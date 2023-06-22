#include<stdio.h>
int main(){
    double a;
    printf("Enter the number: ");
    scanf("%lf",&a);

    if(a<0){
        printf("%.2lf is a negative number\n",a);
    }
    else if(a>0){
        printf("%.2lf is a Positive number\n",a);
    }
    else{
        printf("%.2lf is equal to zero\n",a);
    }
return 0;
}
