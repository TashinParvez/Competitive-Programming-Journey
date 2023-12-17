
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code

using namespace std;
 
/*******************/

class Solution
{
public:
    static void leftpart(vector<int> &arr, int s, int e)
    {
        if (s == e || e - s == 1)
        {
            return;
        }
        int mid = s + (e - s) / 2;
        if (arr[mid - 1] + arr[mid + 1] == 2 * arr[mid])
        {
            swap(arr[mid - 1], arr[mid]);
            leftpart(arr, s, mid - 1);
        }
    }
    static void rightPart(vector<int> &arr, int s, int e)
    {
        if (s == e || e - s == 1)
        {
            return;
        }
        int mid = s + (e - s) / 2;
        if (arr[arr.size() - 1 - mid - 1] + arr[mid + 1] == 2 * arr[mid])
        {
            swap(arr[mid + 1], arr[mid]);
            rightPart(arr, mid + 1, e);
        }
    }

    static void DNC(vector<int> &arr, int s, int e)
    {
        if (s == e || e - s == 1)
        {
            return;
        }
        int mid = s + (e - s) / 2;

        leftpart(arr, s, mid - 1);
        rightPart(arr, mid + 1, e);
    }

    vector<int> beautifulArray(int n)
    {
        vector<int> arr;
        for (size_t i = 1; i <= n; i++)
        {
            arr.push_back(i);
        }

        DNC(arr, 0, n - 1);

        return arr;
    }
};