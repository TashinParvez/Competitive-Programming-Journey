//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    18-08-23     *************************\

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
using namespace std;
int n;

int32_t main()
{

    vector<int> type4(3, 50); // size 3 and its all elements are 50 = { 50, 50, 50 }

    /*************************************** Binary Search ->  to find any element *************************************************************/
    // Binary Search O(logN)

    vector<int> a = {2, 12, 13, 21, 34}; // sorted

    bool present = binary_search(a.begin(), a.end(), 13); // true
    bool _absent = binary_search(a.begin(), a.end(), 33); // false

    string str(n, '0'); // string len n all value 0
                        // if n=3 "000"

    int n;
    string str(n, '0'); // if n==4   "0000"   //O(N)


    // ceil function  [sometimes 1.10 -> 2 needed but ceil dont give that]
    int p, q;
    cout << ceil(p / q) << nl;
    cout << (p + q - 1) / q << nl; // ceil func


    /// lamda function [custom comperator]  ->  Ascending Order
    vector<pair<int, int>> vii;
    sort(vii.begin(), vii.end(), [&](vector<int> a, vector<int> b)
         { return a[1] < b[1]; }); //** < ** ascending oreder

    // Bangladesh



    CRACKED;
}
