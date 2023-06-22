#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90 && marks<101){
            printf("letter A+\nGrade 4.00\n");
    }
    else if(marks>=86 && marks<=89){
            printf("letter A-\nGrade 3.67\n");
    }
    else if(marks>=82 && marks<=85){
            printf("letter B+\nGrade 3.33\n");
    }
    else if(marks>=78 && marks<=81){
            printf("letter B\nGrade 3.00\n");
    }
    else if(marks>=74 && marks<=77){
            printf("letter B-\nGrade 2.67\n");
    }
    else if(marks>=70 && marks<=73){
            printf("letter c+\nGrade 2.33\n");
    }
    else if(marks>=66 && marks<=69){
            printf("letter c\nGrade 2.00\n");
    }
    else if(marks>=62 && marks<=65){
            printf("letter c-\nGrade 1.67\n");
    }
    else if(marks>=58 && marks<=61){
            printf("letter D+\nGrade 1.33\n");
    }
    else if(marks>=55 && marks<=57){
            printf("letter D\nGrade 1.00\n");
    }
    else if(marks<55){
            printf("letter F\nGrade 0.00\n");
    }
    return 0;
}
