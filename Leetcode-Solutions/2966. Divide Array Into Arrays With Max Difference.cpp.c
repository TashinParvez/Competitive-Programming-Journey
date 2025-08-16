

class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        bool flag = 1;
        int j = 0;

        vector<int> oneV;
        for (int i = 0; i < num.size(); i++)
        {
            oneV.push_back(nums[i]);
            if ((i + 1) % 3 == 0)
            {
                if (nums[i] - oneV[0] <= k)
                {
                    ans.push_back(oneV);
                    oneV = {};
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag)
            return ans;
        else
            return {{}};
    }
};