
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

#include <set>

int32_t main()
{
    /*------------------------------ Set --------------------------------------
    --->
    ---> No duplicate elements
    ---> Implemented using BST
    ---> sort itself like map
    ---> insertion/deletion/upperBound/lowerBound  Time Complexity  O(nlogN)
    ---> Random access Not Possible
    */

    set<int> s;
    cout << nl << nl << "------- SET --------" << nl << nl;

    ///  insert element
    s.insert(-11);
    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(9);
    s.insert(3);

    ///  erase element
    s.erase(9);
    s.erase(s.begin());

    /// print
    cout << "Normal  Print: ";
    for (auto i : s)
    {
        cout << i << " --> ";
    }

    cout << nl << "Reverse Print: ";
    for (auto i = s.rbegin(); i != s.rend(); i++) /// Reverse print
    {
        ///  rbegin()  = reverse begin [gives iterator]
        ///  rend()    = reverse End   [gives begin() that is why checking not equal]

        cout << *i << " --> ";
    }
    cout << nl << nl;

    /*------------------------------ Multi-Set --------------------------------------
    ---->
    ---->  allow duplicate element
    ---->  erase(3) = will erase all 3 in multiset
    ---->  erase(find(3)) == erase first 3 of the multi-set
    */

    multiset<int> ms;
    cout << nl << nl << "------- MULTISET --------" << nl << nl;

    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);

    /// print
    cout << "Normal  Print: ";
    for (auto i : ms)
    {
        cout << i << " --> ";
    }

    cout << nl << "Reverse Print: ";
    for (auto i = ms.rbegin(); i != ms.rend(); i++) /// Reverse print
    {
        ///  rbegin()  = reverse begin [gives iterator]
        ///  rend()    = reverse End   [gives begin() that is why checking not equal]

        cout << *i << " --> ";
    }
    cout << nl << nl;

    /*------------------------------ UnOrdered-Set --------------------------------------
       ---->
       ---->  allow duplicate element
       ---->  erase(3) = will erase all 3 in multiset
       ---->  erase(find(3)) == erase first 3 of the multi-set
       */

    unordered_set<int> us;
    cout << nl << nl << "------- UnOrdered-Set  --------" << nl << nl;

    us.insert(1);
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(3);
    us.insert(3);
    us.insert(4);

    /// print
    cout << "Normal  Print: ";
    for (auto i : us)
    {
        cout << i << " --> ";
    }

    cout << nl << nl;

    CRACKED;
}
