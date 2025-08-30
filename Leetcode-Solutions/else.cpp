#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());  // sort the array first

        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate values for the first number
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1;
            int r = n - 1;

            while (l < r) {
                long long sum = (long long)nums[i] + nums[l] + nums[r];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});

                    // Skip duplicates for the second number
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    // Skip duplicates for the third number
                    while (l < r && nums[r] == nums[r - 1]) r--;

                    l++;
                    r--;
                } else if (sum < 0) {
                    l++;  // we need a larger sum
                } else {
                    r--;  // we need a smaller sum
                }
            }
        }

        return ans;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(nums);

    for (auto &triplet : result) {
        for (int num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
}
