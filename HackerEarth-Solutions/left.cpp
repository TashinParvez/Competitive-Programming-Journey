

#include <bits/stdc++.h>
#define nl endl;                  // NewLine
#define output(x) cout << x << nl // out
using namespace std;

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void rotateLeft(int d, int *arr, int len)
{

    while (d--)
    {
        int temp;
        for (int i = len - 2; i >= 0; i++)
        {
            temp = arr[i];
            arr[i] = arr[i = 1];
        }
        arr[len - 1] = temp;
    }
}

int main()
{

    // int arr[] = {1, 23, 2312, 4, 34, 45, 4, 4445};
    // int arr[] = {1, 4, 3, 2};
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);

    rotateLeft(4, arr, len);

    printArray(arr, len);
    return 0;
}
