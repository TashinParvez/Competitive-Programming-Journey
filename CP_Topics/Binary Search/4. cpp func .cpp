#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 4, 5, 6, 8};
    int X = 4;

    //--------------- ------------------ ------------------
    //--------------- binary_search ------------------
    //--------------- ------------------ ------------------

    if (binary_search(arr.begin(), arr.end(), X))
        cout << X << " is found in the array." << endl;
    else
        cout << X << " is not found in the array." << endl;

    //--------------- ------------------ ------------------
    //--------------- UPPER AND LOWER BOUND ------------------
    //--------------- ------------------ ------------------

    cout << " UPPER AND LOWER BOUND " << endl;

    int lb = lower_bound(arr.begin(), arr.end(), X) - arr.begin();
    int ub = upper_bound(arr.begin(), arr.end(), X) - arr.begin();

    cout << "Lower Bound of " << X << " is at index: " << lb << endl;
    cout << "Upper Bound of " << X << " is at index: " << ub << endl;

    

    return 0;
}
