#include<stdio.h>
int main()
{
    printf("Enter how many Courses you took : ");
    int sub;
    scanf("%d",&sub);
    int sumCradits=0;
    float grade,sumCGandCradits=0;
    for(int i=1; i<=sub; i++)
    {
        int cradit;
        printf("Enter your %d course cradit :",i);
        scanf("%d",&cradit);
        sumCradits+=cradit;
        printf("Enter your this course Grades :");
        scanf("%f",&grade);
        sumCGandCradits+=(float)(cradit*grade);
    }

    float CGPA = sumCGandCradits/sumCradits;

    printf("\n\nYour CGPA is %.2f for %d cradits\n\n",CGPA,sumCradits);

    return 0;
}
