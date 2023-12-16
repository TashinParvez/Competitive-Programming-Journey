
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

/**********************************/

class Solution
{
public:
    static bool cmp(vector<int> a, vector<int> b)
    {
        if (a[1] == b[1])
            return a[0] < b[0];
        else
            return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), cmp);
        int cnt = 0;
        int endTime = intervals[0][1];

        for (auto i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] < endTime)
            {
                cnt++;
            }
            else
            {
                endTime = intervals[i][1];
            }
        }

        return cnt;
    }
};

/**********************************/

int32_t main()
{

    CRACKED;
}
