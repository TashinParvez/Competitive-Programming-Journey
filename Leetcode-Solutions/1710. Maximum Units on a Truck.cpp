
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

int32_t main()
{

    CRACKED;
}

/******************/
class Solution
{
public:
    static bool cmp(vector<int> a, vector<int> b)
    {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        int units = 0;
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        for (auto i : boxTypes)
        {
            if (i[0] <= truckSize)
            {
                units += i[0] * i[1];
                truckSize -= i[0];
            }
            else
            {
                units += truckSize * i[1];
                truckSize = 0;
                break;
            }
        }
        return truckSize;
    }
};