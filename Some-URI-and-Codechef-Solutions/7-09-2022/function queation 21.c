// m = array avg
// n = total elements
// x = every single element


#include<stdio.h>
#include<math.h>

int arr[100];
int n;
float m;
void takeInput()
{
    printf("Enter array length ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        m+=arr[i];
    }
    m=m/n;
}
float sum;
void CalcMean(int arr[], int n)
{
    sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=pow((arr[i]-m),2);
    }
}


void Calc_Std_deviation(arr,n)
{
    sum=sum/n;

    printf("%.2f\n",sqrt(sum));
}

int main()
{
    takeInput();
    CalcMean(arr, n);
    Calc_Std_deviation(arr,n);


    return 0;
}
