#include <bits/stdc++.h>
using namespace std;

// -1,  0,  1,  2,  -1,  -4 

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> uniqueTriplets; // to avoid duplicates

    for (int i = 0; i < n; i++)
    {
        int target = -nums[i];  
        unordered_set<int> s; // hashing: store seen elements in this loop

        for (int j = i + 1; j < n; j++)
        {
            int third = target - nums[j];

            // If third exists in the set -> found a triplet
            if (s.find(third) != s.end())
            {
                vector<int> triplet = {nums[i], nums[j], third};
                sort(triplet.begin(), triplet.end()); // ensure sorted order
                uniqueTriplets.insert(triplet);
            }

            s.insert(nums[j]); // mark current number as seen
    
        }
    }

    // Convert set to vector
    return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    cout << "Unique triplets that sum to 0:\n";
    for (auto &trip : result)
    {
        cout << "[ ";
        for (auto &x : trip)
            cout << x << " ";
        cout << "]\n";
    }

    return 0;
}
