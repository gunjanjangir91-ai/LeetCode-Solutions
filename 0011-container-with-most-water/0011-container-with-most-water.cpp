class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxarea = 0;
       while(left<right)
       {
            int currentarea = min(height[left],height[right])*(right-left); 
            if (height[left]<height[right])
            {
                left++;
            }
            else{
                right--;
            }
            maxarea = max(maxarea,currentarea);
       } 
       return maxarea;
    }
};