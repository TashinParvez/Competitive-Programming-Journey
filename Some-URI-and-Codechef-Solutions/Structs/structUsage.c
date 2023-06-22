#include <stdio.h>
#include <string.h>




// structure start

typedef struct Course
{

    char course_name[100];
    int course_id;

} Course;

typedef struct Student
{

    char gender[100];
    char department[100];
    char name[100];
    Course courses_taken[5];
    int student_id;
    int age;
    int year;
    int semester;

} Student;

typedef struct Class
{
    int room_no;
    int floor_no;
    Student student_array[250];

} Class;



// function
int toGetID(Class C1)
{
    for(int i=0; i<3; i++)
    {
        if(strcmp(C1.student_array[i].department,"EEE")==0)
        {
            for(int j=0; j<3; j++)
            {
                if(C1.student_array[i].courses_taken[j].course_id==3115)
                {
                    return C1.student_array[i].student_id;

                }
            }

        }
    }

}



//--------------- main function start from here



int main()
{
    //--------------------------------1 no struct

    Course spl_theory, oop_theory, bioinformatics;   // 1 no struct
    Course aoop_lab, microprocessor_lab;             // 1 no struct


    // filling in course type variables            // 1 no struct
    strcpy(spl_theory.course_name, "SPL THEORY");
    strcpy(oop_theory.course_name, "OOP THEORY");
    strcpy(bioinformatics.course_name, "BIOINFORMATICS THEORY");
    strcpy(aoop_lab.course_name, "AOOP LAB");
    strcpy(microprocessor_lab.course_name, "MICRO LAB");

    spl_theory.course_id = 1110;
    oop_theory.course_id = 2110;
    bioinformatics.course_id = 4001;
    aoop_lab.course_id = 3112;
    microprocessor_lab.course_id = 3115;




    //-------------- -------------------  2 no struct

    Student s1, s2, s3;              // 2 no struct

    // filling in student type variable

    // ------ Student 1 no
    strcpy(s1.gender, "Male");
    strcpy(s1.department, "CSE");
    strcpy(s1.name, "Aron");
    s1.student_id = 12121212;
    s1.age = 21;
    s1.year = 3;
    s1.semester = 8;
    s1.courses_taken[0] = spl_theory;
    s1.courses_taken[1] = oop_theory;
    s1.courses_taken[2] = bioinformatics;


    // ------ Student 2 no
    strcpy(s2.department, "CSE");
    strcpy(s2.gender, "Female");
    strcpy(s2.name, "Charlee");
    s2.student_id = 6676767;
    s2.age = 24;
    s2.year = 4;
    s2.semester = 12;
    s2.courses_taken[0] = bioinformatics;
    s2.courses_taken[1] = microprocessor_lab;
    s2.courses_taken[2] = aoop_lab;


    // ------ Student 3 no
    strcpy(s3.name, "Harry Potter");
    strcpy(s3.department, "EEE");
    strcpy(s3.gender, "Male");
    s3.student_id = 1112323;
    s3.age = 22;
    s3.year = 4;
    s3.semester = 11;
    s3.courses_taken[0] = microprocessor_lab;


    //-------------------------------- 3 no struct

    Class C1;   // 3 no struct

    C1.room_no = 523;
    C1.floor_no = 5;
    C1.student_array[0] = s1;
    C1.student_array[1] = s2;
    C1.student_array[2] = s3;

    {

        // --- sir's Code

        // printing the names of the students in the class
//    for (int i = 0; i < 3; i++)
//    {
//        printf("%s\n", C1.student_array[i].name);
//    }
//    printf("\n\n");

        // finding students who took bioinformatics course and print their name, age and id
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            if (strcmp(C1.student_array[i].courses_taken[j].course_name, "BIOINFORMATICS THEORY") == 0)
//            {
//                printf("%s\n", C1.student_array[i].name);
//            }
//        }
//    }

    }


    // QUESTION


    // write a function that takes the Class structure as parameter
    // and return the id of the student
    // who is in EEE department who took the microprocessor lab.

    // Using the returned id, edit the age of the student to 200






    int studentID = toGetID(C1);

    for(int i=1; i<=3; i++)
    {
        if(C1.student_array[i].student_id == studentID)
        {
            C1.student_array[i].age=200;
        }
    }



//    for(int i=0; i<3; i++)
//    {
//        printf ("%d no student age is %d \n ",i,C1.student_array[i].age);
//    }










//    {
// printing the ages of the students in the class
//
//        for (int i = 0; i < 3; i++)
//        {
//            printf("%d\n", C1.student_array[i].age);
//        }
//        printf("\n\n");
//    }


}
