#include<stdio.h>
#include<string.h>
struct students_info{
char id[9];
char name[10];
int marks[5];
};

int main()
{
    struct students_info students_defaults,students[2];

    ///defaults value
    strcpy(students_defaults.id,"011221362");
    strcpy(students_defaults.name,"Rakib");
    students_defaults.marks[0]=0;
    students_defaults.marks[1]=0;
    students_defaults.marks[2]=0;
    students_defaults.marks[3]=0;
    students_defaults.marks[4]=0;

    //struct students_info students[2];
    for(int i=0;i<2;i++)
    {
        gets(students[i].id);
        gets(students[i].name);
        for(int j=0;j<5;j++)
        {
            scanf("%d",&students[i].marks[j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        puts(students[i].id);
        puts(students[i].name);
        for(int j=0;j<5;j++)
        {
            printf("%d ",students[i].marks[j]);
        }
        printf("\n");
    }
}
