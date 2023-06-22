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
     fflush(stdin);
    printf("Name: ");
    gets(student[i].name);
    printf("ID: ");
    scanf("%d",&student[i].id);
    printf("CGPA: ");
    scanf("%f",&student[i].cgpa);
}

void printHiggCGStuInfo(float higgCGPA, int n, info student[])
{
    for(int i=0; i<n; i++)
    {
        if(student[i].cgpa==higgCGPA)
        {
            puts(student[i].name);
            printf("ID %d\n",student[i].id);
            printf("ID %f\n",student[i].cgpa);
        }
    }
}

// main function

int main()
{
     fflush(stdin);
    int n=3;
    info student[n];

    // taking inputs
    for(int i=0; i<n; i++)
    {
        printf("ENTER STUDENT %d INFO\n",i+1);
        takeInput(i, student);
    }

    // printing

    printf("\nPRINTING HIGH CS SCORED STUDENT INFO\n");

    float higgCGPA=student[0].cgpa;
    for(int i=0; i<n; i++)
    {
        if(student[i].cgpa>higgCGPA)
            higgCGPA=student[i].cgpa;
    }
    printHiggCGStuInfo(higgCGPA,n,student);


    return 0;
}

