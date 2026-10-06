class Solution {
public:
    int robit(vector<int>& nums, int i, vector<int>& dp) {
        int n = nums.size();

        if (i >= n)
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int ans = nums[i];

        // Don't rob house i
        ans = max(ans, robit(nums, i + 1, dp));

        // Rob house i and choose the next non-adjacent house
        for (int j = i + 2; j < n; j++) {
            ans = max(ans, nums[i] + robit(nums, j, dp));
        }

        return dp[i] = ans;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);

        return robit(nums, 0, dp);
    }
};