#include<stdio.h>
// structure
typedef struct studentInfo
{
    char name[100];
    int id;
    float cgpa
} info;

// function
void takeInput(int i,info student[i])
{
    printf("Name: ");
    gets(student[i].name);
    printf("ID: ");
    scanf("%d",&student[i].id);
    printf("CGPA: ");
    scanf("%f",&student[i].cgpa);
}

void printInput(int i,info student[i])
{
    printf("\n%s\n",student[i].name);
    printf("%d\n",student[i].id);
    printf("%f\n",student[i].cgpa);
}

int main()
{
    info student[2];

    // taking inputs
    for(int i=0; i<2; i++)
    {
        printf("ENTER STUDENT %d INFO\n",i+1);
        takeInput(i, student);
    }

    // printing
    printf("\n\nPrinting info's\n");
    for(int i=0; i<2; i++)
    {
        printf("Student %d info\n",i+1);
        printInput(i,student);
    }

    return 0;
}

