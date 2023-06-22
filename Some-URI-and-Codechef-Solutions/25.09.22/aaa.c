void fun1(int *brr, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d ", *(brr+i));
        *(brr+i) = *(brr+i) - 2;
    }
    printf("\n");
}

void fun2(int crr[], int m)
{
    for(int i = 0; i<m ; i++)
    {
        printf("%d ", crr[i]);
        crr[i] = crr[i] + 4;
    }
    printf("\n");
    fun1(crr, 5);
}

int main ()
{
    int arr[] = {5, 10, 13, 17, 23};
    fun2(arr, 5);
    fun1(arr, 5);
}

