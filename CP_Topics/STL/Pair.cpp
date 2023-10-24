//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    18-08-23     *************************\

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define br cout << nl << nl;
using namespace std;

int32_t main()
{
    // store 2 value
    // when you need (x,y)
    // pair<1,1>

    /******************* Basic ************************/
    pair<int, string> p;

    p = make_pair(2, "First"); //_______________ Create pair type 1
    cout << p.first << " " << p.second << nl;
    br;

    pair<int, string> p1 = p; //________________ copy (value)
    p1 = {3, "thired"};       //_______________ Create pair type 2

    cout << p.first << " " << p.second << nl;
    cout << p1.first << " " << p1.second << nl;
    br;

    pair<int, string> &p2 = p1; //________________reference (Add)
    p2 = {3, "thired"};

    cout << p1.first << " " << p1.second << nl;
    cout << p2.first << " " << p2.second << nl;
    br;

    /******************* array of pairs ************************/

    /*
       When You need this ?
       sometimes we used 2 array
       but 2 array are connected if we do one operation on array1
       then its effect should be looked on array2
       that makes complex most of the time

       for exmp
       int arr1[3]={1, 2, 3};
       int arr2[3]={11,22,33};
       if i swap array1 elements then you have to swap array2 elements
       that is a issue
       we can use array of pair here [But better use is  Vector of Pairs ]
    */

    pair<int, int> p_array[3];
    p_array[0] = {0, 00};
    p_array[1] = {1, 11};
    p_array[2] = {2, 22};

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << nl;
    }
    br;

    // swap pairs in array
    swap(p_array[0], p_array[2]); // doing that array's complex work

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << nl;
    }
    br;

    CRACKED;
}
