## 🗂️ CP Cheatsheet (Quick Reference)

### 📌 Map element existence check

##### Using `map`

```cpp

if (mp.find(x) != mp.end()) {
    // x exists in map
}

```

---

# 📘 3Sum Problem ([LeetCode 15](https://leetcode.com/problems/3sum/description/))

#### 🔹 Complexity Comparison

| Approach    | Time Complexity | Space Complexity | Notes                     |
| ----------- | --------------- | ---------------- | ------------------------- |
| Brute Force | `O(n^3)`        | `O(1)`           | Very slow for big inputs  |
| Hashing     | `O(n^2 log k)`  | `O(n)`           | Faster, avoids full cubic |
| Two-Pointer | `O(n^2)`        | `O(1)`           | Best practical solution   |

### 🔹 Code Comparison

<table border="1">
  <tr>
    <td align="center">Brute Force</td>
    <td align="center">Two-Pointer</td>
  </tr>
  <tr>
    <td>

```cpp
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());
                    st.insert(trip);
                }
            }
        }
    }
    return vector<vector<int>>(st.begin(), st.end());
}
```

</td>
<td rowspan="3">

```cpp
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> res;
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum == 0) {
                res.push_back({nums[i], nums[l], nums[r]});
                while (l < r && nums[l] == nums[l + 1]) l++;
                while (l < r && nums[r] == nums[r - 1]) r--;
                l++;
                r--;
            } else if (sum < 0) {
                l++;
            } else {
                r--;
            }
        }
    }
    return res;
}
```

</td>
  </tr>
  <tr>
    <td align="center">Hashing</td>
  </tr>
  <tr>
    <td>

```cpp
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> uniqueTriplets;
    for (int i = 0; i < n - 1; i++) {
        unordered_set<int> s;
        for (int j = i + 1; j < n; j++) {
            int target = -(nums[i] + nums[j]);
            if (s.find(target) != s.end()) {
                vector<int> trip = {nums[i], nums[j], target};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());
}
```

</td>
</tr>
</table>

---
