//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    18-08-23     *************************\

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
using namespace std;

// void printVector(vector<int> arr) // by value
void printVector(vector<int> &arr)   // by reference
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << nl;
}

/*
   in araay and vector
   if you declare them locally then you can use upto 10^5
   if you use more of it you can get run time error

   if you declare them globally then you can use upto 10^7
*/

int main()
{
  /************************************ Decleare types ****************************************************************/

  vector<int> type1;                       // normal
  vector<int> type2(3);                    // size 3
  vector<int> type4(3, 50);                // size 3 and its all elements are 50 = { 50, 50, 50 }   /// important**
  vector<int> type3 = {12, 21, 2, 13, 34}; // assigning value

  swap(type1, type2); // elements will swap

  /************************************ Important elements ****************************************************************/

  // Fromt element
  cout << "Front element of the vector  " << type3.front() << nl;

  // Last element
  cout << "last element of the vector  " << type3.back() << nl;

  // vector size
  cout << "vector Size   " << type3.size() << nl;

  // erase first element
  type3.erase(type3.begin());

  // empty check
  cout << type3.empty() << nl;

  // clear vector
  type4.clear();

  // Input in a vector
  for (int i = 0; i < 10; i++)
  {
    int x;
    cin >> x;
    type3.push_back(x);
  }

  vector<int> type5(5); // its all value already assigned [0 0 0 0 0]
  type5.push_back(6);
  // it will increase vector size and add 6 in the end [0 0 0 0 0 6]

  //************************ Copy *******************************************

  vector<int> type6 = type1; // value only

  cout << nl << nl;
  /*****************************************  Sort  ****************************************************************************/

  vector<int> arr; // new Vector

  arr.push_back(542); // insert
  arr.push_back(12);
  arr.push_back(17);
  arr.push_back(14);
  arr.pop_back();             // remove 14   // delete
  arr.insert(arr.begin(), 5); // Inserting in the begining of the vector

  // ascending order-sort       O(nlogn)
  sort(arr.begin(), arr.end()); // here "end()"  indicates the end point. It's not pointing the last element.

  for (auto i : arr)
    cout << i << " ";
  cout << nl << nl;

  /******************************************* Iterator ****************************************************************************/

  vector<int>::iterator i; // Vector iterator
  /*>
    auto iterator = itr;  // Another way of creating iterator
    itr= arr.begin();
  */

  for (i = arr.begin(); i != arr.end(); i++) // printing using iterator
  {
    cout << *i << " ";
  }
  cout << nl;

  for (auto &i : arr) // reference
  {
    i++;
    cout << i << " ";
  }

  cout << nl << nl;
  /*************************************** Binary Search ->  to find any element *************************************************************/

  vector<int> a = {12, 21, 2, 13, 34};
  sort(a.begin(), a.end());

  // Binary Search O(logN)
  bool present = binary_search(a.begin(), a.end(), 13); // true
  bool _absent = binary_search(a.begin(), a.end(), 33); // false

  /********************************* Upper & lower bound  + Occourance ************************************************************************************/

  vector<int> A = {2, 3, 11, 14, 100, 100, 100, 100, 123}; // elements should be sorted

  // first element equal to and grater than that    ==>   O(logN)
  vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); // >= (Graterthan and Equal)
                                                                   // *it = first 100
  /*
    same thing using "auto"
    auto it = lower_bound(A.begin(), A.end(), 100);
  */

  // first element grater than that
  vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // > (Graterthan)
                                                                    // *it2 =  123

  cout << "it = " << *it << nl;  // 100
  cout << "it = " << *it2 << nl; // 123

  cout << nl << nl;

  cout << " 100 Occurance  " << it2 - it << nl; // printing occurance using upper and lower bound

  return 0;
}
