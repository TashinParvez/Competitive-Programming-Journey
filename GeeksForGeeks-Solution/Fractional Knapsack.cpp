//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
/******************************************************/

class Solution
{
public:
    static bool cmp(Item a, Item b)
    {
        return ((a.value * 1.0) / a.weight) > ((b.value * 1.0) / b.weight);
    }
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr + n, cmp);

        // for (auto i = 0; i < n; i++)
        // {
        //     cout << arr[i].value << "   " << arr[i].weight << endl;
        // }

        double profit = 0;
        for (auto i = 0; i < n; i++)
        {
            if (arr[i].weight <= W)
            {
                W -= arr[i].weight;
                profit += arr[i].value;
            }
            else if (arr[i].weight > W)
            {
                profit += ((W * 1.0) * ((arr[i].value * 1.0) / arr[i].weight));
                W = 0;
                break;
            }
        }
        return profit;
    }
};

/******************************************************/

//{ Driver Code Starts.
int main()
{
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(2) << fixed;
    while (t--)
    {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends