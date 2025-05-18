
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl
#define int long long
#define setDec(x) fixed << setprecision(x)
#define tashin cout << "____Tashin____" << nl;
#define dbg(x) cerr << #x << " = " << (x) << endl;
using namespace std;

template <typename T>
int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

int lowerBound(vector<int> &arr, int X)
{
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= X)
        {
            ans = mid;
            high = mid - 1; // Move left if arr[mid] is >= X
        }
        else
            low = mid + 1; // Move right if arr[mid] is smaller
    }

    return ans; // First position where X could be inserted
}

int32_t main()
{
    vector<int> arr = {1, 2, 4, 4, 5, 6, 8}; // size = 7

    int x = 9;

    cout << lowerBound(arr, x) << nl;

    CRACKED;
}
