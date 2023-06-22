#include<stdio.h>
#include<string.h>

// ---------------- a
typedef struct country
{
    char name[100];
    int population;
    float area;
    int rainfall;
} country;

// -------------- B
void  takeOneCountryInfoFromKeyboard(int i,country arr[])
{
    printf("Enter %d Country INFO\nName: ",i+1);
    gets(arr[i].name);

    printf("Enter Country population: ");
    scanf("%d", &arr[i].population);

    printf("Enter Country Area: ");
    scanf("%f", &arr[i].area);

    printf("Enter Country rainfall: ");
    scanf("%d",&arr[i].rainfall);
}


//-------------------  For C
int searchACountry(country arr[],int rainfall,int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i].rainfall==rainfall)
        {
            printf("name: %s\n",arr[i].name);
            printf("population: %d\n", arr[i].population);
            printf("area: %f\n", arr[i].area);
            return 0;
        }
    }
    printf("Not Found\n");
}


//------------------- For D  ( Reverse Index )
void displayAllCountriesInfoReverse(country arr[],int n)
{
    printf("Country Name – Country Population – Country Area – Rainfall Amount");
    for(int i=0; i<n ; i++)
    {
        // printing name in reverse order
        int l = strlen(arr[i].name);
        for(int j=l-1; i>=0; j--)
        {
            printf("%d",&arr[i].name[j]);
        }

        // printing Population in reverse order

        int p=arr[i].population;
        int digits=0;
        while(p)
        {
            digits++;
            p=p/10;
        }

    }
}


//--------------------------------------  Main Function
int main()
{
    //-------------------------------------- main menu

    printf("======= BD Rainfall Record System =========\n");

    while(1)
    {
        printf("Enter your choice: ");
        char c;
        scanf("%c",&c);

        int nn;

        switch(c)
        {
        case 'r':
            {

            // -------------- Taking all countries info
            printf("Enter total country Number: ");
            int n;
            scanf("%d",&n);
nn=n;
            country arr[n];

            for(int i=0; i<n; i++)
                takeOneCountryInfoFromKeyboard(i,arr);
            break;
            }
        case 's':
            {

            //--------------------  C  ( Taking rainfall Info )
            printf("Enter one country rainfall: ");
            int rainfall ;
            scanf("%d", &rainfall);
            searchACountry(arr,rainfall,nn);
            break;
            }
        case 't':
            //--------------- D  ( Countries in reverse index )
            displayAllCountriesInfoReverse(arr,n);
            break;

        case 'q':
            return 0;

        default:
            printf("Invalid Input\n");
            break;
        }
    }


    return 0;
}

