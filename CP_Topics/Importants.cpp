//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    18-08-23     *************************\

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
using namespace std;

int32_t main()
{

    vector<int> type4(3, 50); // size 3 and its all elements are 50 = { 50, 50, 50 }

    /*************************************** Binary Search ->  to find any element *************************************************************/
    vector<int> a = {2, 12, 13, 21, 34}; // sorted

    // Binary Search O(logN)
    bool present = binary_search(a.begin(), a.end(), 13); // true
    bool _absent = binary_search(a.begin(), a.end(), 33); // false

    CRACKED;
}