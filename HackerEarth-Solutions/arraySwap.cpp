#include <iostream>
#define nl endl;                  // NewLine
#define output(x) cout << x << nl // out
using namespace std;

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void function(int *arr, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        swap(arr[i], arr[len - i - 1]);
    }
}

int main()
{
    // int arr[] = {1, 23, 2312, 4, 34, 45, 4, 4445};
    int arr[] = {1 ,4, 3, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);

    function(arr, len);

    printArray(arr, len);

    return 0;
}
