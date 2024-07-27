class Solution {
public:
int call(vector<int>&nums,int idx,int prev,vector<vector<int>>&dp){
    if(idx<0)return 0;
    int pick=0;
    if(dp[idx][prev+1]!=-1)return dp[idx][prev+1];
    if(prev==-1 || nums[idx]<nums[prev])
    pick=1+call(nums,idx-1,idx,dp);
    int notpick=call(nums,idx-1,prev,dp);
    return dp[idx][prev+1]=max(pick,notpick);
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       

        return call(nums,n-1,-1,dp);
    }
};