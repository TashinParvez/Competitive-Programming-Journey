
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

class Solution
{
public:
    static bool comperator(vector<int> a, vector<int> b)
    {
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end(), comperator);
        int cnt = 0;
        int st = points[0][0];
        int ed = points[0][1];

        for (int i = 1; i < points.size(); i++)
        {
            if (points[i][1] <= ed)
            {
                st = max(st, points[i][0]);
                ed = min(points[i][1], ed);
                continue;
            }
            else
            {
                if (points[i][0] <= ed)
                {
                    st = max(st, points[i][0]);
                    ed = min(points[i][1], ed);
                }
                else
                {
                    st = points[i][0];
                    ed = points[i][1];
                    cnt++;
                }
            }
        }
        cnt++;
        return cnt;
    }
};