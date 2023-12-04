class Solution
{
public:
    int tribonacci(int n)
    {
        int dpTable[40];

        dpTable[0] = 0;
        dpTable[1] = 1;
        dpTable[2] = 1;

        for (int i = 3; i <= n; i++)
        {
            dpTable[i] = dpTable[i - 1] + dpTable[i - 2] + dpTable[i - 3];
        }

        return dpTable[n];
    }
};