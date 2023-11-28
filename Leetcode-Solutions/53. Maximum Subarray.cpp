
class Result
{
public:
    int maxSum;
    int leftindex;
    int rightIndex;
};

class Solution
{

public:
    int maxSubArray(vector<int> &nums)
    {
        Result ans = maximumSubArray(nums, 0, nums.size() - 1);

        return ans.maxSum;
    }

    Result crossingSum(vector<int> &arr, int left, int mid, int right)
    {
        // checking left side
        Result result;
        int sum = 0;
        int lSum = INT_MIN;
        int index = mid;
        while (index >= left)
        {
            sum += arr[index];
            if (sum > lSum)
            {
                lSum = sum;
                result.leftindex = index;
            }
            index--;
        }

        // checking right side
        sum = 0;
        int rSum = INT_MIN;
        index = mid + 1;
        while (index <= right)
        {
            sum += arr[index];
            if (sum > rSum)
            {
                rSum = sum;
                result.rightIndex = index;
            }
            index++;
        }

        result.maxSum = lSum + rSum;

        return result;
    }

    Result maximumSubArray(vector<int> &arr, int left, int right)
    {
        if (left == right)
        {
            Result result;
            result.maxSum = arr[left];
            result.leftindex = result.rightIndex = left;

            return result;
        }
        else
        {
            int mid = left + ((right - left) / 2);

            Result leftSum = maximumSubArray(arr, left, mid);
            Result rightSum = maximumSubArray(arr, mid + 1, right);
            Result crossSum = crossingSum(arr, left, mid, right);

            if (max({leftSum.maxSum, rightSum.maxSum, crossSum.maxSum}) == leftSum.maxSum)
                return leftSum;
            else if (max({leftSum.maxSum, rightSum.maxSum, crossSum.maxSum}) == rightSum.maxSum)
                return rightSum;
            else
                return crossSum;
        }
    }
};
