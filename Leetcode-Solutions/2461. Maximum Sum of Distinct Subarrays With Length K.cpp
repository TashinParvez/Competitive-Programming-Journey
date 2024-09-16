
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
#define tashin cout << "____Tashin____" << nl;                  // Pointer
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code

using namespace std;

// --------------------------------

long long maximumSubarraySum(vector<int> &nums, int k)
{
    long long ansSum = 0;
    long long sum = 0;
    map<int, int> digitCnt;
    vector<int> distinctPtr;

    for (int i = 0; i < k; i++)
    {
        digitCnt[nums[i]]++;
        if (digitCnt[nums[i]] == 2)
        {
            distinctPtr.push_back(1);
        }
        sum += nums[i];
    }

    if (distinctPtr.size() == 0)
    {
        ansSum = max(ansSum, sum);
    }

    int n = nums.size();
    for (int i = k; i < n; i++)
    {
        digitCnt[nums[i]]++;

        if (digitCnt[nums[i]] == 2)
            distinctPtr.push_back(1);

        if (digitCnt[nums[i - k]] == 2)
            distinctPtr.pop_back();

        digitCnt[nums[i - k]]--;

        sum += nums[i];
        sum -= nums[i - k];

        if (distinctPtr.size() == 0)
        {
            ansSum = max(ansSum, sum);
        }
    }
    return ansSum;
}

int main()
{
    vector<int> v = {1, 5, 4, 2, 9, 9, 9};
    cout << maximumSubarraySum(v, 3) << nl;
    CRACKED;
}
