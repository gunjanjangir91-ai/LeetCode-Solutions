class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        int maxreach = 0;
        while(i<nums.size())
        {
            if (i>maxreach)
            {
                return false;
            }
            maxreach = max(i+nums[i],maxreach);
            i++;
            if (maxreach>=nums.size()-1)
            {
                return true;
            }
        }
        return true;
    }
};