#include<stdio.h>
int main()
{

    printf("Enter your year: ");
    int year;
    scanf("%d",&year);
    Printf("-------It's %d-------\n",year);

   char months[12]= {"January","February","March","April","May","June","July","August","September","October","November","December"};

    int monthDays[12]= {31,28,31,30,31,30,31,31,30,31,30,31};

    // checking year is leap year or not
    if(year%400==0 || (year%4==0 && year%100!=0))
    {
        monthDays[1]=29;
    }

    char days[7]= {"Sat","Sun","Mon","Tue","Wed","Thu","Fri"};



    for(int i=0; i<12,i++)
    {
        Printf("-------%s-------\n",months[i]);
        for(int j=0;j<7;j++)
        {
        Printf("\t%s\t",days[i]);
        }



    }

    printf("%d",n);
    return 0;
}

