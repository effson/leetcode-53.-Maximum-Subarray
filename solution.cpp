//dp[i] is the maximum sum of the interval whose end element is nums[i], this problem i use dynamic programming.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size=nums.size();
        if(size==1)
           return nums[0];
        vector<int> dp;
        dp.resize(size,INT_MIN);
        dp[0]=nums[0];
        int maxval=nums[0];
        for(int i=1;i<size;i++)
        {
            dp[i]=max(dp[i-1]+nums[i],nums[i]);
            maxval=max(maxval,dp[i]);
        }
        return maxval;
    }
};
