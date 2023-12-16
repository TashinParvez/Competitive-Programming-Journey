//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include <bits/stdc++.h>
using namespace std;

// A structure to represent a job
struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

// } Driver Code Ends
/*
struct Job
{
    int id;	 // Job Id
    int dead; // Deadline of job
    int profit; // Profit if job is over before or on deadline
};
*/
/*******************************************************************************************/

class Solution
{
public:
    static bool cmp(Job &a, Job &b)
    {
        return a.profit > b.profit;
    }

    vector<int> JobScheduling(Job arr[], int n)
    {
        vector<int> ans;
        sort(arr, arr + n, cmp);

        int profit = 0;
        int taken = 0;
        int workDone[n] = {0};

        for (auto i = 0; i < n; i++)
        {
            int idx = arr[i].dead - 1;

            if (workDone[idx] == 0)
            {
                taken++;
                profit += arr[i].profit;
                workDone[idx] = 1;
            }
            else
            {
                while (idx != -1)
                {
                    if (workDone[idx] == 0)
                    {
                        taken++;
                        profit += arr[i].profit;
                        workDone[idx] = 1;
                        break;
                    }
                    idx--;
                }
            }
        }

        ans.push_back(taken);
        ans.push_back(profit);
        return ans;
    }
};

/*******************************************************************************************/
//{ Driver Code Starts.
// Driver program to test methods
int main()
{
    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;
        Job arr[n];

        // adding id, deadline, profit
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            arr[i].id = x;
            arr[i].dead = y;
            arr[i].profit = z;
        }
        Solution ob;
        // function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends