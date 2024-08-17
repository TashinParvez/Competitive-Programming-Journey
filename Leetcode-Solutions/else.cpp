
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define int long long
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define tashin cout << "____Tashin____" << nl;                  // Pointer
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code

using namespace std;

int func(int nums[], int target)
{
    int start = 0;
    int end = 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2.0;
        cout<<mid<<nl;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return -1;
}

int32_t main()
{
    int arr[] = {-1};
    cout << func(arr, -1) << nl;

    CRACKED;
}
