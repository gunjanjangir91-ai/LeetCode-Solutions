class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        int dp[2501][2501] = {};

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i; j >= 0; j--)
            {
                // Don't take nums[i]
                dp[i][j] = dp[i + 1][j];

                // Take nums[i]
                if (j == 0 || nums[i] > nums[j - 1])
                {
                    dp[i][j] = max(dp[i][j],
                                   1 + dp[i + 1][i + 1]);
                }
            }
        }

        return dp[0][0];
    }
};