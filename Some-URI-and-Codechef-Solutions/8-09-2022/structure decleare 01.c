#include<stdio.h>
typedef struct studentInfo
{
    char name[100];
    int id;
    float cgpa
} info;

int main()
{
    info s1;
    printf("Enter Student Info: \n");
    printf("Name: ");
    gets(s1.name);
    printf("ID: ");
    scanf("%d",&s1.id);
    printf("CGPA: ");
    scanf("%f",&s1.cgpa);



    printf("\n%s\n",s1.name);
    printf("%d\n",s1.id);
    printf("%f\n",s1.cgpa);
    return 0;
}

